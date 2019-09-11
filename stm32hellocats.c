int cat_weight = 0;
int cat_happiness = 0;
int cat_rooing = 0;

int meows = 3;
int barfs = 10;

int barf_piles = 0;


void make_cat_happy() {
  cat_weight = 11; // extra mass discarded
  cat_happiness = 100;
}

void make_cat_sad() {
  cat_weight = 100; // mass buildup
  cat_happiness = 22;
}

void make_cat_roo() {
  cat_rooing = 1;
}

int main(void)
{
  meows = meows + 3;

  barf_piles = barfs * meows;

  if(barf_piles > 66) {
    make_cat_happy();
  }
  else {
    make_cat_sad();
  }


  if(cat_happiness > 50) {
    make_cat_roo();
  }
}
