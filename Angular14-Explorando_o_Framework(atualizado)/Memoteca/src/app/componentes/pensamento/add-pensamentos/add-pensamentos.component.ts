import { PensamentoService } from './../pensamento.service';
import { Pensamento } from './../pensamento';
import { Component, OnInit } from '@angular/core';
import { Router } from '@angular/router';

@Component({
  selector: 'app-add-pensamentos',
  templateUrl: './add-pensamentos.component.html',
  styleUrls: ['./add-pensamentos.component.css']
})
export class AddPensamentosComponent implements OnInit {

  constructor(private service: PensamentoService,
    private router: Router
  ) { }

  ngOnInit(): void {
  }

  pensamento: Pensamento = {
    conteudo: '',
    autoria: '',
    modelo: 'modelo1'
  }

  CriarPensamento() {
    this.service.criar(this.pensamento).subscribe(() =>{
      this.router.navigate(['/listaPensamento'])
    })
  }
  Cancelar(){
    this.router.navigate(['/listaPensamento'])
  }
}
