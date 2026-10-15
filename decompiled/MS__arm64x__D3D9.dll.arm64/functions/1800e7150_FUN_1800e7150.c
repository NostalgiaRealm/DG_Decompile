/*
 * FUN_1800e7150 at 1800e7150
 * undefined FUN_1800e7150(void)
 * Address ranges: 1800e7150-1800e721b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800e7150(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  puVar3 = (undefined8 *)FUN_180102f80(0x78);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_18023b900;
    puVar3[1] = param_1;
    *(undefined4 *)(puVar3 + 2) = param_2;
    *(undefined4 *)((longlong)puVar3 + 0x14) = param_3;
    puVar3[3] = 0x400;
    *(undefined4 *)(puVar3 + 4) = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[8] = 0;
    puVar3[7] = 0;
    puVar3[9] = 0;
    if (*(int *)(puVar3 + 3) != 0) {
      plVar4 = *(longlong **)(puVar3[1] + (ulonglong)*(uint *)(puVar3 + 2) * 0x20);
      uVar2 = (**(code **)(*plVar4 + 0x78))(plVar4,*(undefined4 *)((longlong)puVar3 + 0x14));
      pcVar1 = __imp_KERNEL32_dll_InitializeCriticalSection;
      *(undefined4 *)(puVar3 + 4) = uVar2;
      (*pcVar1)(puVar3 + 5);
      return puVar3;
    }
    FUN_1800e6ee0(puVar3);
    FUN_180102fc0(puVar3,0x78);
  }
  return (undefined8 *)0x0;
}

