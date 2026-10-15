/*
 * FUN_18004e268 at 18004e268
 * undefined __cdecl FUN_18004e268(longlong param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 18004e268-18004e31f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004e268(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  SIZE_T SVar5;
  undefined4 uStack_24;
  
  iVar1 = *(int *)(param_1 + 0xb2c);
  if (*(int *)(param_1 + 0xb28) == iVar1) {
    uVar2 = iVar1 << 1;
    if (iVar1 == 0) {
      uVar2 = 0x10;
    }
    SVar5 = CONCAT44(0,uVar2) << 5;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = CONCAT44(0,uVar2);
    if (SUB168(auVar3 * ZEXT816(0x20),8) != 0) {
      SVar5 = 0xffffffffffffffff;
    }
    puVar4 = (undefined8 *)thunk_FUN_1800636c0(SVar5);
    if (puVar4 == (undefined8 *)0x0) {
      return;
    }
    thunk_FUN_1800010d8(puVar4,*(undefined8 **)(param_1 + 0xb20),
                        (ulonglong)*(uint *)(param_1 + 0xb2c) << 5);
    thunk_FUN_180063700(*(LPVOID *)(param_1 + 0xb20));
    *(undefined8 **)(param_1 + 0xb20) = puVar4;
    *(uint *)(param_1 + 0xb2c) = uVar2;
  }
  puVar4 = (undefined8 *)
           (*(longlong *)(param_1 + 0xb20) + (ulonglong)*(uint *)(param_1 + 0xb28) * 0x20);
  puVar4[1] = param_2;
  *puVar4 = 0;
  puVar4[3] = CONCAT44(uStack_24,param_5);
  puVar4[2] = CONCAT44(param_4,param_3);
  *(int *)(param_1 + 0xb28) = *(int *)(param_1 + 0xb28) + 1;
  return;
}

