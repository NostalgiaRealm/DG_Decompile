/*
 * FUN_1800478f8 at 1800478f8
 * undefined FUN_1800478f8(void)
 * Address ranges: 1800478f8-180047a23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800478f8(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar12 = param_3[1];
  uVar10 = *param_3;
  uVar8 = param_3[3];
  uVar6 = param_3[2];
  lVar5 = *(longlong *)(param_1 + 0xf6e0);
  uVar13 = param_3[5];
  uVar11 = param_3[4];
  uVar9 = param_3[7];
  uVar7 = param_3[6];
  FUN_180101630(lVar5 + 0x12c0);
  if (*(char *)(lVar5 + 0x14c4) != '\0') {
    puVar2 = (undefined8 *)FUN_180101500(lVar5 + 0x12c0,0x50);
    pcVar1 = __imp_KERNEL32_dll_Sleep;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_1800015a0(lVar5 + 0x14c0);
      puVar2[1] = 0x50;
      puVar2[2] = param_1;
      *(undefined4 *)(puVar2 + 3) = param_2;
      *(undefined8 *)((longlong)puVar2 + 0x24) = uVar12;
      *(undefined8 *)((longlong)puVar2 + 0x1c) = uVar10;
      *(undefined8 *)((longlong)puVar2 + 0x34) = uVar8;
      *(undefined8 *)((longlong)puVar2 + 0x2c) = uVar6;
      *(undefined8 *)((longlong)puVar2 + 0x44) = uVar13;
      *(undefined8 *)((longlong)puVar2 + 0x3c) = uVar11;
      *(undefined8 *)((longlong)puVar2 + 0x54) = uVar9;
      *(undefined8 *)((longlong)puVar2 + 0x4c) = uVar7;
      puVar4 = (undefined8 *)((longlong)puVar2 + 99U & 0xfffffffffffffff8);
      *puVar4 = 0;
      *puVar2 = FUN_180047a28;
      *(undefined8 **)(lVar5 + (ulonglong)*(uint *)(lVar5 + 0x14bc) * 0x28 + 0x1350) = puVar4;
      pcVar1 = __imp_KERNEL32_dll_SetEvent;
      if (*(char *)(lVar5 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar5 + 0x12c0) = 0;
        (*pcVar1)(*(undefined8 *)(lVar5 + 0x1340));
        return;
      }
      goto LAB_180047a0c;
    }
    *(undefined4 *)(lVar5 + 0x12c0) = 0;
    (*pcVar1)(100);
    FUN_180101630(lVar5 + 0x12c0);
  }
  plVar3 = *(longlong **)(lVar5 + 0x14a0);
  *plVar3 = param_1;
  *(undefined4 *)(plVar3 + 1) = param_2;
  *(undefined8 *)((longlong)plVar3 + 0x14) = uVar12;
  *(undefined8 *)((longlong)plVar3 + 0xc) = uVar10;
  *(undefined8 *)((longlong)plVar3 + 0x24) = uVar8;
  *(undefined8 *)((longlong)plVar3 + 0x1c) = uVar6;
  *(undefined8 *)((longlong)plVar3 + 0x34) = uVar13;
  *(undefined8 *)((longlong)plVar3 + 0x2c) = uVar11;
  *(undefined8 *)((longlong)plVar3 + 0x44) = uVar9;
  *(undefined8 *)((longlong)plVar3 + 0x3c) = uVar7;
  FUN_180047a28();
LAB_180047a0c:
  *(undefined4 *)(lVar5 + 0x12c0) = 0;
  return;
}

