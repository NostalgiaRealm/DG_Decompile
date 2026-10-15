/*
 * FUN_100245c8 at 100245c8
 * uint __fastcall FUN_100245c8(uint param_1)
 * Address ranges: 100245c8-1002467b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_100245c8(uint param_1)

{
  int iVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *this;
  undefined4 uStack_8;
  
  uStack_8 = param_1 & 0xffffff;
  iVar1 = *(int *)(param_1 + 0x3188);
  this = (int *)(iVar1 + 0x11c0);
  FUN_10035d50(this);
  if (*(char *)(iVar1 + 0x12ec) == '\0') {
LAB_1002464c:
    puVar2 = *(uint **)(iVar1 + 0x12d0);
    *puVar2 = param_1;
    puVar2[1] = (int)&uStack_8 + 3;
    FUN_1002467c((int)puVar2);
  }
  else {
    puVar3 = (undefined4 *)FUN_10035c70(this,8);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_10021b34(this);
      goto LAB_1002464c;
    }
    LOCK();
    *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
    UNLOCK();
    puVar3[1] = 8;
    puVar3[2] = param_1;
    puVar3[3] = (int)&uStack_8 + 3;
    puVar5 = (undefined4 *)((int)puVar3 + 0x13U & 0xfffffffc);
    *puVar5 = 0;
    *puVar3 = FUN_1002467c;
    this[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar5;
    if (*(char *)(iVar1 + 0x12ed) != '\0') {
      *this = 0;
      SetEvent(*(HANDLE *)(iVar1 + 0x1220));
      goto LAB_10024663;
    }
  }
  *this = 0;
LAB_10024663:
  uVar4 = FUN_10036680(*(int *)(param_1 + 0x3188) + 0x11c0);
  return CONCAT31((int3)((uint)uVar4 >> 8),uStack_8._3_1_);
}

