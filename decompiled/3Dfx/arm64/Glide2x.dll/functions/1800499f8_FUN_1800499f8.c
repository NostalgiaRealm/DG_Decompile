/*
 * FUN_1800499f8 at 1800499f8
 * undefined8 * __cdecl FUN_1800499f8(undefined8 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 1800499f8-180049ac3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800499f8(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  puVar2 = (undefined8 *)FUN_18005fb88(0x78);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_180065280;
    puVar2[1] = param_1;
    *(undefined4 *)(puVar2 + 2) = param_2;
    *(undefined4 *)((longlong)puVar2 + 0x14) = param_3;
    puVar2[3] = 0x400;
    *(undefined4 *)(puVar2 + 4) = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    puVar2[6] = 0;
    puVar2[5] = 0;
    puVar2[8] = 0;
    puVar2[7] = 0;
    puVar2[9] = 0;
    if (*(int *)(puVar2 + 3) != 0) {
      plVar3 = *(longlong **)(puVar2[1] + (ulonglong)*(uint *)(puVar2 + 2) * 0x20);
      uVar1 = (**(code **)(*plVar3 + 0x78))(plVar3,*(undefined4 *)((longlong)puVar2 + 0x14));
      *(undefined4 *)(puVar2 + 4) = uVar1;
      InitializeCriticalSection((LPCRITICAL_SECTION)(puVar2 + 5));
      return puVar2;
    }
    FUN_180049788(puVar2);
    FUN_18005fbc8(puVar2);
  }
  return (undefined8 *)0x0;
}

