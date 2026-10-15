/*
 * FUN_1002ca70 at 1002ca70
 * undefined __thiscall FUN_1002ca70(void * this, uint param_1, undefined4 param_2, uint param_3)
 * Address ranges: 1002ca70-1002cac1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002ca70(void *this,uint param_1,undefined4 param_2,uint param_3)

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
    case 0xc:
    case 0x16:
    case 0x17:
    case 0x18:
      (**(code **)(*(int *)this + 0x98))(0);
    }
    FUN_1002ab30(this,(int)this + 0x80,(int)this + 0x1d30,param_1,param_2,param_3);
  }
  return;
}

