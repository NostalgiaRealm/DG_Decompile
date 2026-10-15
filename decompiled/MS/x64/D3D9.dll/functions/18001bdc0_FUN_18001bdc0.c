/*
 * FUN_18001bdc0 at 18001bdc0
 * undefined4 * __fastcall FUN_18001bdc0(longlong param_1)
 * Address ranges: 18001bdc0-18001c004
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_18001bdc0(longlong param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  ulonglong uVar10;
  longlong lVar11;
  undefined4 *puVar9;
  
  uVar1 = *(uint *)(param_1 + 0x400);
  puVar7 = (undefined4 *)0x0;
  if (uVar1 != 0) {
    puVar9 = puVar7;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x3f8) + (longlong)puVar9 * 8) == 0) {
        if ((int)puVar9 != -1) goto LAB_18001be9e;
        break;
      }
      uVar8 = (int)puVar9 + 1;
      puVar9 = (undefined4 *)(ulonglong)uVar8;
    } while (uVar8 < uVar1);
  }
  uVar8 = *(uint *)(param_1 + 0x404);
  if (uVar1 == uVar8) {
    uVar10 = 0x10;
    if (uVar8 != 0) {
      uVar10 = (ulonglong)(uVar8 * 2);
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar10;
    uVar4 = SUB168(ZEXT816(8) * auVar3,0);
    if (SUB168(ZEXT816(8) * auVar3,8) != 0) {
      uVar4 = 0xffffffffffffffff;
    }
    puVar5 = (undefined8 *)thunk_FUN_1800fbccc(uVar4);
    if (puVar5 == (undefined8 *)0x0) {
      puVar9 = (undefined4 *)0xffffffff;
      goto LAB_18001be96;
    }
    FUN_1800fbec0(puVar5,*(undefined8 **)(param_1 + 0x3f8),
                  (ulonglong)*(uint *)(param_1 + 0x404) << 3);
    FUN_1800fbcf0(*(LPVOID *)(param_1 + 0x3f8));
    *(undefined8 **)(param_1 + 0x3f8) = puVar5;
    *(int *)(param_1 + 0x404) = (int)uVar10;
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x3f8) + (ulonglong)*(uint *)(param_1 + 0x400) * 8) = 0;
  puVar9 = (undefined4 *)(ulonglong)*(uint *)(param_1 + 0x400);
  *(uint *)(param_1 + 0x400) = *(uint *)(param_1 + 0x400) + 1;
LAB_18001be96:
  puVar6 = (undefined4 *)0xffffffff;
  if ((int)puVar9 != -1) {
LAB_18001be9e:
    puVar6 = (undefined4 *)FUN_1800fbccc(0xad40);
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = 0;
      puVar7 = puVar6 + 0x1de;
      *(undefined8 *)(puVar6 + 2) = 0;
      lVar11 = 0x10a;
      do {
        FUN_1800fbea0((undefined1 *)puVar7,0,0x40);
        puVar7[0xf] = 0x3f800000;
        puVar7[10] = 0x3f800000;
        puVar7[5] = 0x3f800000;
        *puVar7 = 0x3f800000;
        puVar7 = puVar7 + 0x10;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      *(undefined8 *)(puVar6 + 0x12ae) = 0;
      *(undefined8 *)(puVar6 + 0x12b0) = 0;
      *(undefined8 *)(puVar6 + 0x12b2) = 0;
      *(undefined8 *)(puVar6 + 0x2b1a) = 0;
      *(undefined8 *)(puVar6 + 0x2b1c) = 0;
      *(undefined8 *)(puVar6 + 0x2b1e) = 0;
      *(undefined8 *)(puVar6 + 0x2b20) = 0;
      *(undefined8 *)(puVar6 + 0x2b22) = 0;
      *(undefined8 *)(puVar6 + 0x2b24) = 0;
      *(undefined8 *)(puVar6 + 0x2b26) = 0;
      *(undefined8 *)(puVar6 + 0x2b28) = 0;
      *(undefined8 *)(puVar6 + 0x2b2a) = 0;
      *(undefined8 *)(puVar6 + 0x2b2c) = 0;
      *(undefined8 *)(puVar6 + 0x2b2e) = 0;
      *(undefined8 *)(puVar6 + 0x2b30) = 0;
      *(undefined8 *)(puVar6 + 0x2b32) = 0;
      *(undefined8 *)(puVar6 + 0x2b34) = 0;
      *(undefined8 *)(puVar6 + 0x2b36) = 0;
      *(undefined8 *)(puVar6 + 0x2b38) = 0;
      *(undefined2 *)(puVar6 + 0x2b3a) = 0;
      *(undefined8 *)(puVar6 + 0x2b3c) = 0;
      puVar6[0x2b3e] = 0;
      *(undefined2 *)(puVar6 + 0x2b3f) = 0;
      *(undefined1 *)((longlong)puVar6 + 0xacfe) = 0;
      *(undefined8 *)(puVar6 + 0x2b40) = 0;
      *(undefined8 *)(puVar6 + 0x2b42) = 0;
      *(undefined8 *)(puVar6 + 0x2b44) = 0;
      *(undefined8 *)(puVar6 + 0x2b46) = 0;
      *(undefined8 *)(puVar6 + 0x2b48) = 0;
      *(undefined8 *)(puVar6 + 0x2b4a) = 0;
      *(undefined8 *)(puVar6 + 0x2b4c) = 0;
      *(undefined8 *)(puVar6 + 0x2b4e) = 0;
      FUN_1800fbea0((undefined1 *)(puVar6 + 0x13da),0,0x40);
      puVar7 = puVar6;
    }
    *(undefined4 **)(*(longlong *)(param_1 + 0x3f8) + (longlong)puVar9 * 8) = puVar7;
    puVar2 = *(undefined1 **)(*(longlong *)(param_1 + 0x3f8) + (longlong)puVar9 * 8);
    puVar6 = (undefined4 *)0xffffffff;
    if (puVar2 != (undefined1 *)0x0) {
      FUN_1800fbea0(puVar2,0,0xad40);
      puVar6 = puVar9;
    }
  }
  return puVar6;
}

