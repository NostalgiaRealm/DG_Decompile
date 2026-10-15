/*
 * FUN_10044ff0 at 10044ff0
 * undefined __thiscall FUN_10044ff0(void * this, uint param_1, undefined4 param_2, uint param_3)
 * Address ranges: 10044ff0-10045041
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10044ff0(void *this,uint param_1,undefined4 param_2,uint param_3)

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
      (**(code **)(*(int *)this + 0xc0))(0);
    }
    FUN_100433b0(this,(int)this + 0x90,(int)this + 0xd970,param_1,param_2,param_3);
  }
  return;
}

