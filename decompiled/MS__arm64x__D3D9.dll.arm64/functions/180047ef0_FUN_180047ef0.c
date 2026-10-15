/*
 * FUN_180047ef0 at 180047ef0
 * undefined FUN_180047ef0(void)
 * Address ranges: 180047ef0-180048063
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180047ef0(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar5 = param_3[0xc];
  uVar17 = param_3[1];
  uVar14 = *param_3;
  uVar11 = param_3[3];
  uVar8 = param_3[2];
  uVar1 = *(undefined4 *)(param_3 + 0xd);
  uVar18 = param_3[5];
  uVar15 = param_3[4];
  uVar12 = param_3[7];
  uVar9 = param_3[6];
  lVar7 = *(longlong *)(param_1 + 0xf6e0);
  uVar19 = param_3[9];
  uVar16 = param_3[8];
  uVar13 = param_3[0xb];
  uVar10 = param_3[10];
  FUN_180101630(lVar7 + 0x12c0);
  if (*(char *)(lVar7 + 0x14c4) != '\0') {
    puVar3 = (undefined8 *)FUN_180101500(lVar7 + 0x12c0,0x78);
    pcVar2 = __imp_KERNEL32_dll_Sleep;
    if (puVar3 != (undefined8 *)0x0) {
      FUN_1800015a0(lVar7 + 0x14c0);
      puVar3[1] = 0x78;
      puVar3[2] = param_1;
      *(undefined4 *)(puVar3 + 3) = param_2;
      *(undefined8 *)((longlong)puVar3 + 0x24) = uVar17;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = uVar14;
      *(undefined8 *)((longlong)puVar3 + 0x34) = uVar11;
      *(undefined8 *)((longlong)puVar3 + 0x2c) = uVar8;
      *(undefined8 *)((longlong)puVar3 + 0x44) = uVar18;
      *(undefined8 *)((longlong)puVar3 + 0x3c) = uVar15;
      *(undefined8 *)((longlong)puVar3 + 0x54) = uVar12;
      *(undefined8 *)((longlong)puVar3 + 0x4c) = uVar9;
      *(undefined8 *)((longlong)puVar3 + 100) = uVar19;
      *(undefined8 *)((longlong)puVar3 + 0x5c) = uVar16;
      *(undefined8 *)((longlong)puVar3 + 0x74) = uVar13;
      *(undefined8 *)((longlong)puVar3 + 0x6c) = uVar10;
      *(undefined8 *)((longlong)puVar3 + 0x7c) = uVar5;
      *(undefined4 *)((longlong)puVar3 + 0x84) = uVar1;
      puVar6 = (undefined8 *)((longlong)puVar3 + 0x8fU & 0xfffffffffffffff8);
      *puVar6 = 0;
      *puVar3 = FUN_180048068;
      *(undefined8 **)(lVar7 + (ulonglong)*(uint *)(lVar7 + 0x14bc) * 0x28 + 0x1350) = puVar6;
      pcVar2 = __imp_KERNEL32_dll_SetEvent;
      if (*(char *)(lVar7 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar7 + 0x12c0) = 0;
        (*pcVar2)(*(undefined8 *)(lVar7 + 0x1340));
        return;
      }
      goto LAB_18004804c;
    }
    *(undefined4 *)(lVar7 + 0x12c0) = 0;
    (*pcVar2)(100);
    FUN_180101630(lVar7 + 0x12c0);
  }
  plVar4 = *(longlong **)(lVar7 + 0x14a0);
  *plVar4 = param_1;
  *(undefined4 *)(plVar4 + 1) = param_2;
  *(undefined8 *)((longlong)plVar4 + 0x14) = uVar17;
  *(undefined8 *)((longlong)plVar4 + 0xc) = uVar14;
  *(undefined8 *)((longlong)plVar4 + 0x24) = uVar11;
  *(undefined8 *)((longlong)plVar4 + 0x1c) = uVar8;
  *(undefined8 *)((longlong)plVar4 + 0x34) = uVar18;
  *(undefined8 *)((longlong)plVar4 + 0x2c) = uVar15;
  *(undefined8 *)((longlong)plVar4 + 0x44) = uVar12;
  *(undefined8 *)((longlong)plVar4 + 0x3c) = uVar9;
  *(undefined8 *)((longlong)plVar4 + 0x54) = uVar19;
  *(undefined8 *)((longlong)plVar4 + 0x4c) = uVar16;
  *(undefined8 *)((longlong)plVar4 + 100) = uVar13;
  *(undefined8 *)((longlong)plVar4 + 0x5c) = uVar10;
  *(undefined8 *)((longlong)plVar4 + 0x6c) = uVar5;
  *(undefined4 *)((longlong)plVar4 + 0x74) = uVar1;
  FUN_180048068();
LAB_18004804c:
  *(undefined4 *)(lVar7 + 0x12c0) = 0;
  return;
}

