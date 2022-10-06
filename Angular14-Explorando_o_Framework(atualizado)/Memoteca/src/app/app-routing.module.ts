import { ExcluirPensamentoComponent } from './componentes/pensamento/excluir-pensamento/excluir-pensamento.component';
import { NgModule } from '@angular/core';
import { RouterModule, Routes } from '@angular/router';
import { AddPensamentosComponent } from './componentes/pensamento/add-pensamentos/add-pensamentos.component';
import { ListaPensamentosComponent } from './componentes/pensamento/lista-pensamentos/lista-pensamentos.component';

const routes: Routes = [
  {
    path: '',
    redirectTo: 'listaPensamento',
    pathMatch: 'full'
  },
  {
    path: 'criarPensamento',
    component: AddPensamentosComponent
  },
  {
    path: 'listaPensamento',
    component: ListaPensamentosComponent
  }
  ,
  {
    path: 'pensamentos/excluirPensamento/:id',
    component: ExcluirPensamentoComponent
  }
];

@NgModule({
  imports: [RouterModule.forRoot(routes)],
  exports: [RouterModule]
})
export class AppRoutingModule { }
