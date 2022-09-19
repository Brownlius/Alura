import { AutenticationService } from './../../autentication/autentication.service';
import { Component, OnInit } from '@angular/core';

@Component({
  selector: 'app-login',
  templateUrl: './login.component.html',
  styleUrls: ['./login.component.scss']
})
export class LoginComponent implements OnInit {

  usuario = '';
  senha = '';

  constructor(private authService: AutenticationService) { }

  ngOnInit(): void { }

  login() {
    this.authService.autenticar(this.usuario, this.senha).subscribe(() => {
      console.log("Autenticado!");
    },
      (error) => {
        alert("Usuário ou senha errado.")
        console.log(error);
      }
    )
  }

}
