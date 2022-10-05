import { Component, OnInit } from '@angular/core';

@Component({
  selector: 'app-add-pensamentos',
  templateUrl: './add-pensamentos.component.html',
  styleUrls: ['./add-pensamentos.component.css']
})
export class AddPensamentosComponent implements OnInit {

  constructor() { }

  ngOnInit(): void {
  }

  pensamento = {
    id: '1',
    conteudo: 'Digite o conteúdo',
    autoria: 'Digite a autoria',
    modelo: 'modelo1'
  }

  CriarPensamento() {
    alert("PQP")
  }

}
