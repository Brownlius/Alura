import { PensamentoService } from './../pensamento.service';
import { Pensamento } from './../pensamento';
import { Component, OnInit } from '@angular/core';
import { Router } from '@angular/router';
import { FormBuilder, FormGroup, Validators } from '@angular/forms';

@Component({
  selector: 'app-add-pensamentos',
  templateUrl: './add-pensamentos.component.html',
  styleUrls: ['./add-pensamentos.component.css']
})
export class AddPensamentosComponent implements OnInit {

  constructor(private service: PensamentoService,
    private router: Router,
    private formBuilder: FormBuilder
  ) { }

  ngOnInit(): void {
    this.formulario = this.formBuilder.group({
      conteudo: ['', Validators.compose([
        Validators.required,
        Validators.pattern(/^\S*$/)
      ])],
      autoria: ['', Validators.compose([
        Validators.required,
        Validators.minLength(3)
      ])],
      modelo: ['modelo1']
    })
  }

  formulario!: FormGroup;

  CriarPensamento() {
    if (this.formulario.valid) {
      this.service.criar(this.formulario.value).subscribe(() => {
        this.router.navigate(['/listaPensamento'])
      })
    }
  }
  Cancelar() {
    this.router.navigate(['/listaPensamento'])
  }
  habilitarBotao(): string {
    if (this.formulario.valid) {
      return 'botao'
    } else {
      return 'botao__desabilitado'
    }
  }
}
