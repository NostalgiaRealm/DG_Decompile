/*
 * FUN_10024952 at 10024952
 * uint __fastcall FUN_10024952(uint param_1)
 * Address ranges: 10024952-10024a05
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10024952(uint param_1)

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
  FUN_100360e0(this);
  if (*(char *)(iVar1 + 0x12ec) == '\0') {
LAB_100249d6:
    puVar2 = *(uint **)(iVar1 + 0x12d0);
    *puVar2 = param_1;
    puVar2[1] = (int)&uStack_8 + 3;
    FUN_10024a06((int)puVar2);
  }
  else {
    puVar3 = (undefined4 *)FUN_10036000(this,8);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_10021ec0(this);
      goto LAB_100249d6;
    }
    LOCK();
    *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
    UNLOCK();
    puVar3[1] = 8;
    puVar3[2] = param_1;
    puVar3[3] = (int)&uStack_8 + 3;
    puVar5 = (undefined4 *)((int)puVar3 + 0x13U & 0xfffffffc);
    *puVar5 = 0;
    *puVar3 = FUN_10024a06;
    this[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar5;
    if (*(char *)(iVar1 + 0x12ed) != '\0') {
      *this = 0;
      SetEvent(*(HANDLE *)(iVar1 + 0x1220));
      goto LAB_100249ed;
    }
  }
  *this = 0;
LAB_100249ed:
  uVar4 = FUN_10036a10(*(int *)(param_1 + 0x3188) + 0x11c0);
  return CONCAT31((int3)((uint)uVar4 >> 8),uStack_8._3_1_);
}

