import { ComponentFixture, TestBed } from '@angular/core/testing';

import { AddPensamentosComponent } from './add-pensamentos.component';

describe('AddPensamentosComponent', () => {
  let component: AddPensamentosComponent;
  let fixture: ComponentFixture<AddPensamentosComponent>;

  beforeEach(async () => {
    await TestBed.configureTestingModule({
      declarations: [ AddPensamentosComponent ]
    })
    .compileComponents();

    fixture = TestBed.createComponent(AddPensamentosComponent);
    component = fixture.componentInstance;
    fixture.detectChanges();
  });

  it('should create', () => {
    expect(component).toBeTruthy();
  });
});
