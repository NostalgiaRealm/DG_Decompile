/*
 * FUN_100178fc at 100178fc
 * uint __fastcall FUN_100178fc(uint param_1)
 * Address ranges: 100178fc-100179af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_100178fc(uint param_1)

{
  int iVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *this;
  undefined4 uStack_8;
  
  uStack_8 = param_1 & 0xffffff;
  iVar1 = *(int *)(param_1 + 0x3308);
  this = (int *)(iVar1 + 0x11c0);
  FUN_1002acc0(this);
  if (*(char *)(iVar1 + 0x12ec) == '\0') {
LAB_10017980:
    puVar2 = *(uint **)(iVar1 + 0x12d0);
    *puVar2 = param_1;
    puVar2[1] = (int)&uStack_8 + 3;
    FUN_100179b0((int)puVar2);
  }
  else {
    puVar3 = (undefined4 *)FUN_1002abe0(this,8);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_10014f4d(this);
      goto LAB_10017980;
    }
    LOCK();
    *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
    UNLOCK();
    puVar3[1] = 8;
    puVar3[2] = param_1;
    puVar3[3] = (int)&uStack_8 + 3;
    puVar5 = (undefined4 *)((int)puVar3 + 0x13U & 0xfffffffc);
    *puVar5 = 0;
    *puVar3 = FUN_100179b0;
    this[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar5;
    if (*(char *)(iVar1 + 0x12ed) != '\0') {
      *this = 0;
      SetEvent(*(HANDLE *)(iVar1 + 0x1220));
      goto LAB_10017997;
    }
  }
  *this = 0;
LAB_10017997:
  uVar4 = FUN_1002b5f0(*(int *)(param_1 + 0x3308) + 0x11c0);
  return CONCAT31((int3)((uint)uVar4 >> 8),uStack_8._3_1_);
}

