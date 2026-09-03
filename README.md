<h1>idea:</h1>
<h6>that physics simulation how to ball fall on real life without anything </h6>
<h1>why me do this:</h1>
<h6>I was try to ulitize mathematique and physique whate i am study on hight school for do this</h6>
<h1>mathematique & physique side:</h1>
<h3>from  Application the rote 2nd for newton :</h3>
<h3>$$\sum \vec Fext = m \cdot a$$</h3>
<h3>$$\vec P + \vec f +\vec \pi = m \cdot \vec a$$</h3>
<h3>on Axis Y :</h3>
<h3>$$-\pi +P -  f  = m \cdot a$$</h3>
<h3>$$(f,P,\pi)   is    (m  \cdot  g ,k  \cdot  v , \rho_f \cdot v \cdot k)$$</h3>
<h3>$$-g \cdot V_f \cdot \rho_f + m \cdot g - k \cdot v= m \cdot a$$</h3>
<h3>div equation by m:</h3>
<h3>$$\cfrac {-g \cdot V_f \cdot \rho_f}{m} + g -\cfrac{k \cdot v}{m}  = a$$</h3>
<h3>$$a=\cfrac{dv}{dt}$$</h3>
<h3>$$\cfrac {-g \cdot V_f \cdot \rho_f}{m} + g - \cfrac{k \cdot v}{m}  = \cfrac{dv}{dt}$$</h3>
<h3>$$equation*\cfrac{k \cdot v}{m}$$</h3>
<h3>$$\cfrac {-g \cdot V_f \cdot \rho_f}{m} + g  = \cfrac{dv}{dt}+ \cfrac{k \cdot v}{m}$$</h3>
<h3>$$\exists a ,b \in R^2 a \dot v + \frac{dv}{dt}= b -> \forall t \in R v(t)= v_lim(1-e^ \frac {t}{\tau})$$</h3>
<h3> $$\tau = \frac{m}{k} |and| k=6 \dot \pi \dot r^2 \, and \, m= \rho \dot v $$</h3>
<h3>that function return v(t) while get r and v and k are functions</h3>
<h1>Programing side:</h1>
<h2>Class circle:</h2>
<p>i create a <strong>class circle<storng> is define by <stong> radius </stong>and <strong>numofPoint</strong>= 30 <br>
and i was created functions like Circle::m Circle::Teau ($\tau$) Circle::k and Circle::v_lim final <br>
and i create Circle::v()=Circle::v_lim*(1-exp(-t/Circle::Teau))
</p>
<h2>mainloop:</h2>
<h3>i create a window app vars likes:</h3>
<ul>
  <li>t sf::Clock is time between start and t</li>
  <li>circles sf::Circle[999] that circles</li>
  <li>sizeofCircles  size_t is number of Circles</li>
</ul>
<h2>input</h2>
<ul>
  <li>i create a float variable is r for number and i set it r if  0 stop else add sf::Circles circle with a radian r</li>
</ul>
 <h2>while loop:</h2>
<li> i draw a circle by circle by circle and move it by circle.v()</li>
<h1>How it Work:</h1>
<h3> input a r and add circle with radiant while r $$\neq$$ 0</h3>
<h3>input is Slowest if you set 0 that set  fast else set slow</h3>
<h3>that do a circle fall image</h3>
