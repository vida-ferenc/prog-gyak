%% Feladat definialasa
% x0, y0, f (anonim fuggvenykent)
% h adott, b adott ([x0,b] az intervallum)
x0=0;
y0=1;
f=@(x,y) 2*y+x;   %diffegyenlet jobb oldala

h=0.25;         %lepeshossz
b=1;            %intervallum vege

%% Mire lesz meg szuksegunk?
% n: lepesszam
x=x0:h:4;

%kesobb
% x es y vektorok
x=x0:h:b;
y=zeros(1,n+1);     %feltolzjuk majd osztopontokkal               %feltoltjuk majd a helyetesitesi ertekek kozelito ertekeivel
% ezek elso koordinatajat definialjuk

y(1)=y0; %%y elso kordinataja
%% Iteracio
% for ciklusban toltsuk fel adatokkal x-et es y-t
for i=1:(length(x)-1)

    
    y(i+1)=y(i)+h*f(x(i),y(i));

end

%% Irassuk ki az eredmenyt:
x_Euler=x;
y_Euler=y;
disp(x_Euler)
disp(y_Euler)   

%% Eredmenyek abrazolasa:

%% Szimbolikus (egzakt) megoldas megkeresese es kirajzolasa 

% 1. csinaljunk az f fuggvenybol egy szimbolikus fuggvenyt

syms x y;
syms f_symb(x,y);
f_symb(x,y)=f(x,y);

% 2. oldjuk meg a differencialegyenletet dsolve-val

syms y(x);
eqn=diff(y,x)==f(x,y(x));
cond=y(x0)==y0;
megoldas=dsolve(eqn,cond);        % ez az egzakt megoldas

% 3. egzakt megoldas kirajzolasa

egzakt=@(x) eval(megoldas);
xx=linspace(x0,b);
yy=egzakt(xx);

figure;
plot(xx,yy,'r')
hold on 

%%
% numerikus megoldas kirajzolasa

plot(x_Euler,y_Euler,'g.-')
legend('egzakt','numerikus','Location','northwest') 
hold of
