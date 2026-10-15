/*
 * FUN_10053570 at 10053570
 * undefined __thiscall FUN_10053570(void * this, uint param_1, undefined4 param_2, uint param_3)
 * Address ranges: 10053570-100535c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10053570(void *this,uint param_1,undefined4 param_2,uint param_3)

{
  if (param_1 < 8) {
    switch(param_2) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x1a:
    case 0x1b:
    case 0x1c:
      (**(code **)(*(int *)this + 0xec))(0);
    }
    FUN_10051810(this,(int)this + 0x90,(int)this + 0xf660,param_1,param_2,param_3);
  }
  return;
}

