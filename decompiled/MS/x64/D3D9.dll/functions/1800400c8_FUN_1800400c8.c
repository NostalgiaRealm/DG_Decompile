/*
 * FUN_1800400c8 at 1800400c8
 * undefined8 * __fastcall FUN_1800400c8(longlong param_1, int param_2, int param_3)
 * Address ranges: 1800400c8-18004022f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800400c8(longlong param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  
  puVar4 = (undefined8 *)FUN_1800fbccc(0x58);
  if (puVar4 != (undefined8 *)0x0) {
    uVar1 = *(undefined4 *)(param_1 + 400);
    uVar5 = *(undefined8 *)(param_1 + 0x188);
    *(int *)(puVar4 + 6) = param_3;
    puVar4[3] = uVar5;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[2] = param_1;
    puVar4[4] = 0;
    *(undefined4 *)(puVar4 + 5) = uVar1;
    *(int *)((longlong)puVar4 + 0x2c) = param_2;
    *(undefined4 *)((longlong)puVar4 + 0x34) = 0xffffffff;
    *(undefined2 *)(puVar4 + 7) = 0;
    puVar4[10] = 0;
    if ((param_3 == 2) && (param_2 != 0)) {
      *(undefined4 *)(puVar4 + 6) = 0;
    }
    *puVar4 = &PTR_FUN_1801022e8;
    puVar4[1] = &PTR_FUN_180101fd0;
    uVar5 = FUN_180040d8c((longlong)(puVar4 + 1));
    if ((char)uVar5 != '\0') {
      if (param_3 != 1) {
        return puVar4;
      }
      iVar2 = *(int *)(param_1 + 0x1b4);
      if (*(int *)(param_1 + 0x1b0) == iVar2) {
        uVar7 = 0x10;
        if (iVar2 != 0) {
          uVar7 = (ulonglong)(uint)(iVar2 * 2);
        }
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar7;
        uVar5 = SUB168(ZEXT816(8) * auVar3,0);
        if (SUB168(ZEXT816(8) * auVar3,8) != 0) {
          uVar5 = 0xffffffffffffffff;
        }
        puVar6 = (undefined8 *)thunk_FUN_1800fbccc(uVar5);
        if (puVar6 == (undefined8 *)0x0) {
          return puVar4;
        }
        FUN_1800fbec0(puVar6,*(undefined8 **)(param_1 + 0x1a8),
                      (ulonglong)*(uint *)(param_1 + 0x1b4) << 3);
        FUN_1800fbcf0(*(LPVOID *)(param_1 + 0x1a8));
        *(undefined8 **)(param_1 + 0x1a8) = puVar6;
        *(int *)(param_1 + 0x1b4) = (int)uVar7;
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x1a8) + (ulonglong)*(uint *)(param_1 + 0x1b0) * 8) =
           puVar4 + 1;
      *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1b0) + 1;
      return puVar4;
    }
    FUN_180055d80(puVar4);
    FUN_1800fbcf0(puVar4);
  }
  return (undefined8 *)0x0;
}

