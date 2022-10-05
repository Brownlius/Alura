import { AutenticationService } from './../../autentication/autentication.service';
import { Component, OnInit } from '@angular/core';
import { Router } from '@angular/router';

@Component({
  selector: 'app-login',
  templateUrl: './login.component.html',
  styleUrls: ['./login.component.scss']
})
export class LoginComponent implements OnInit {

  usuario = '';
  senha = '';

  constructor(private authService: AutenticationService, private router: Router) { }

  ngOnInit(): void { }

  login() {
    this.authService.autenticar(this.usuario, this.senha).subscribe(() => {
      this.router.navigate(['animais']);
    },
      (error) => {
        alert("Usuário ou senha errado.")
        console.log(error);
      }
    )
  }

}
