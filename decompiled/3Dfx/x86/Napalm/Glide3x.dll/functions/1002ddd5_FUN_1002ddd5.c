/*
 * FUN_1002ddd5 at 1002ddd5
 * undefined4 __fastcall FUN_1002ddd5(undefined4 param_1, uint param_2, uint param_3, undefined4 param_4, undefined1 param_5, undefined4 param_6, uint param_7, uint param_8)
 * Address ranges: 1002ddd5-1002de52
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall
FUN_1002ddd5(HWND param_1,uint param_2,uint param_3,undefined4 param_4,undefined1 param_5,
            undefined4 param_6,uint param_7,uint param_8)

{
  char cVar1;
  undefined *this;
  uint uVar2;
  undefined4 uVar3;
  undefined1 local_10 [4];
  char *local_c;
  HWND local_8;
  
  local_10[0] = 0;
  local_c = "3DfxSpl3.dll";
  local_8 = param_1;
  this = FUN_10005411();
  cVar1 = FUN_1000560f((int)this);
  if ((cVar1 == '\0') || (*(int *)(this + 0x30) != 0)) {
switchD_1002de18_default:
    uVar3 = 0;
  }
  else {
    switch(param_6) {
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
      uVar2 = FUN_100061fc((int)this);
      if (uVar2 < 4) goto switchD_1002de18_default;
    case 3:
      uVar3 = FUN_1000577f(this,local_8,param_2,param_3,param_4,param_6,param_5,param_7,param_8,
                           local_10);
      break;
    default:
      goto switchD_1002de18_default;
    }
  }
  return uVar3;
}

