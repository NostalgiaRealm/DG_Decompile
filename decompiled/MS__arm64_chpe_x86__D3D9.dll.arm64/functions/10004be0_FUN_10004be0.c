/*
 * FUN_10004be0 at 10004be0
 * undefined FUN_10004be0(void)
 * Address ranges: 10004be0-10004c9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10004be0(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5
                 ,uint param_6)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  iVar1 = FUN_10004ff0(param_1,param_2);
  switch(param_3) {
  case 1:
  case 3:
  case 5:
    if (param_4 <= *(uint *)(iVar1 + 0x58)) {
      bVar2 = param_5 <= *(uint *)(iVar1 + 0x5c);
    }
    break;
  case 2:
  case 4:
    if ((param_4 <= *(uint *)(iVar1 + 0x58)) && (param_5 <= *(uint *)(iVar1 + 0x5c))) {
      bVar2 = param_6 <= *(uint *)(iVar1 + 0x60);
    }
  }
  return bVar2;
}

