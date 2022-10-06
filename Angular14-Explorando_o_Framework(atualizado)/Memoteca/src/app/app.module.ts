import { NgModule } from '@angular/core';
import { BrowserModule } from '@angular/platform-browser';
import { AppRoutingModule } from './app-routing.module';
import { AppComponent } from './app.component';
import { CabecalhoComponent } from './componentes/cabecalho/cabecalho.component';
import { RodapeComponent } from './componentes/rodape/rodape.component';
import { AddPensamentosComponent } from './componentes/pensamento/add-pensamentos/add-pensamentos.component';
import { FormsModule } from '@angular/forms';
import { ListaPensamentosComponent } from './componentes/pensamento/lista-pensamentos/lista-pensamentos.component';
import { Routes } from '@angular/router';
import { PensamentoComponent } from './componentes/pensamento/pensamento/pensamento.component';
import { HttpClientModule } from '@angular/common/http';
import { ExcluirPensamentoComponent } from './componentes/pensamento/excluir-pensamento/excluir-pensamento.component';

@NgModule({
  declarations: [
    AppComponent,
    CabecalhoComponent,
    RodapeComponent,
    AddPensamentosComponent,
    ListaPensamentosComponent,
    PensamentoComponent,
    ExcluirPensamentoComponent
  ],
  imports: [
    BrowserModule,
    AppRoutingModule,
    FormsModule,
    HttpClientModule
  ],
  providers: [],
  bootstrap: [AppComponent]
})
export class AppModule { }
