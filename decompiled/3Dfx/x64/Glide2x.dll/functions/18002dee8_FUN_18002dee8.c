/*
 * FUN_18002dee8 at 18002dee8
 * undefined __fastcall FUN_18002dee8(longlong param_1, undefined8 * param_2)
 * Address ranges: 18002dee8-18002e01e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002dee8(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  
  FUN_180026a88(param_1 + 0x34e8);
  lVar4 = *(longlong *)(param_1 + 0x31c0);
  uVar3 = *(uint *)(param_1 + 0xe8);
  piVar2 = (int *)(lVar4 + 0x12c0);
  FUN_18005e070(piVar2);
  if (*(char *)(lVar4 + 0x14c4) != '\0') {
    uVar1 = uVar3 + 7;
    uVar7 = (uVar1 & 0xfffffff8) + 0x10;
    puVar5 = (undefined8 *)FUN_18005e090((longlong)piVar2,uVar7);
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar4 + 0x14c0) = *(int *)(lVar4 + 0x14c0) + 1;
      UNLOCK();
      puVar5[1] = (ulonglong)uVar7;
      puVar5[3] = param_1;
      puVar6 = (undefined8 *)((longlong)puVar5 + 0x27U & 0xfffffffffffffff8);
      puVar5[2] = puVar6;
      FUN_18005ed10(puVar6,param_2,(ulonglong)uVar3);
      puVar6 = (undefined8 *)(((ulonglong)uVar1 & 0xfffffff8) + (longlong)puVar6);
      *puVar6 = 0;
      *puVar5 = FUN_18002e020;
      *(undefined8 **)(lVar4 + 0x1350 + (ulonglong)*(uint *)(lVar4 + 0x14bc) * 0x28) = puVar6;
      if (*(char *)(lVar4 + 0x14c5) != '\0') {
        FUN_18005e1c0(piVar2);
        SetEvent(*(HANDLE *)(lVar4 + 0x1340));
        return;
      }
      goto LAB_18002e006;
    }
    FUN_18005e1c0(piVar2);
    Sleep(100);
    FUN_18005e070(piVar2);
  }
  puVar5 = *(undefined8 **)(lVar4 + 0x14a0);
  *puVar5 = param_2;
  puVar5[1] = param_1;
  FUN_18002e020(puVar5);
LAB_18002e006:
  FUN_18005e1c0(piVar2);
  return;
}

