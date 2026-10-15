/*
 * FUN_180048cdc at 180048cdc
 * undefined8 * __fastcall FUN_180048cdc(longlong param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 180048cdc-180048da8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180048cdc(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_180060a9c(0x78);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = param_1;
    *puVar3 = &PTR_FUN_180066500;
    *(undefined4 *)(puVar3 + 2) = param_2;
    *(undefined4 *)((longlong)puVar3 + 0x14) = param_3;
    puVar3[3] = 0x400;
    *(undefined4 *)(puVar3 + 4) = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    if (*(int *)(puVar3 + 3) != 0) {
      plVar1 = *(longlong **)((ulonglong)*(uint *)(puVar3 + 2) * 0x20 + param_1);
      uVar2 = (**(code **)(*plVar1 + 0x78))(plVar1,param_3);
      *(undefined4 *)(puVar3 + 4) = uVar2;
      InitializeCriticalSection((LPCRITICAL_SECTION)(puVar3 + 5));
      return puVar3;
    }
    FUN_1800489d8(puVar3);
    FUN_180060ac0(puVar3);
  }
  return (undefined8 *)0x0;
}

