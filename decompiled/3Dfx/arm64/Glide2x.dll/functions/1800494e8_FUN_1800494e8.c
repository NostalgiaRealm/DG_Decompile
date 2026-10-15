/*
 * FUN_1800494e8 at 1800494e8
 * undefined8 * __cdecl FUN_1800494e8(longlong param_1, uint param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 1800494e8-1800495e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_1800494e8(longlong param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
             )

{
  undefined4 uVar1;
  undefined8 *puVar2;
  HANDLE pvVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  puVar2 = (undefined8 *)FUN_18005fb88(0x48);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_180065270;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    puVar2[5] = 0x400000000;
    puVar2[3] = 0;
    puVar2[4] = 0;
    *(undefined4 *)(puVar2 + 6) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x34) = param_4;
    *(undefined4 *)(puVar2 + 7) = 0;
    puVar2[8] = 0;
    pvVar3 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
    puVar2[8] = pvVar3;
    if (pvVar3 != (HANDLE)0x0) {
      puVar2[1] = param_1;
      *(uint *)(puVar2 + 2) = param_2;
      *(undefined4 *)((longlong)puVar2 + 0x2c) = param_3;
      *(undefined4 *)(puVar2 + 6) = param_5;
      plVar4 = *(longlong **)(param_1 + (ulonglong)param_2 * 0x20);
      uVar1 = (**(code **)(*plVar4 + 0x78))(plVar4,param_3);
      *(undefined4 *)(puVar2 + 7) = uVar1;
      uVar5 = FUN_1800492f8((longlong)puVar2);
      if ((uVar5 & 1) != 0) {
        return puVar2;
      }
      CloseHandle((HANDLE)puVar2[8]);
      puVar2[8] = 0;
    }
    FUN_1800491f8(puVar2);
    FUN_18005fbc8(puVar2);
  }
  return (undefined8 *)0x0;
}

