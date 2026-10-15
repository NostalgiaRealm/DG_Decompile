/*
 * FUN_10003180 at 10003180
 * undefined FUN_10003180(void)
 * Address ranges: 10003180-1000326b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10003180(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_30 [4];
  
  uVar1 = *(uint *)(param_1 + 0x218);
  uVar6 = 0xffffffff;
  if (uVar1 != 0) {
    uVar5 = 0;
    do {
      if (*(int *)(*(int *)(param_1 + 0x214) + uVar5 * 4) == 0) {
        uVar6 = uVar5;
        if (uVar5 != 0xffffffff) goto LAB_10003204;
        break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
  }
  local_30[0] = 0;
  uVar4 = FUN_100059f0(param_1 + 0x214,local_30);
  uVar5 = uVar6;
  if (((uVar4 & 1) != 0) && (uVar5 = *(uint *)(param_1 + 0x218) - 1, uVar5 != 0xffffffff)) {
LAB_10003204:
    iVar2 = FUN_10081cb0(0xa5c);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_100016a0(iVar2);
    }
    *(undefined4 *)(*(int *)(param_1 + 0x214) + uVar5 * 4) = uVar3;
    iVar2 = *(int *)(*(int *)(param_1 + 0x214) + uVar5 * 4);
    if (iVar2 == 0) {
      uVar5 = 0xffffffff;
    }
    else {
      FUN_10081f10(iVar2,0,0xa5c);
    }
  }
  return uVar5;
}

