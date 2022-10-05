import { Component, OnInit } from '@angular/core';

@Component({
  selector: 'app-lista-pensamentos',
  templateUrl: './lista-pensamentos.component.html',
  styleUrls: ['./lista-pensamentos.component.css']
})
export class ListaPensamentosComponent implements OnInit {

  listaPensamentos = [
    {
      conteudo: 'Blablu Blé',
      autoria: 'Taz',
      modelo: 'modelo3'
    },
    {
      conteudo: 'Abla blu Blé',
      autoria: 'Taz',
      modelo: 'modelo1'
    },
    {
      conteudo: 'Lorem ipsum dolor sit amet consectetur adipisicing elit. Culpa officiis, sapiente placeat asperiores soluta nobis, enim ratione magni exercitationem voluptatum vel alias, voluptatibus cupiditate. Quibusdam quasi exercitationem nisi ad rerum!',
      autoria: 'Taz',
      modelo: 'modelo2'
    },
    {
      conteudo: 'Abla blu Blé',
      autoria: 'Taz',
      modelo: 'modelo1'
    }
  ];

  constructor() { }

  ngOnInit(): void {
  }

}
