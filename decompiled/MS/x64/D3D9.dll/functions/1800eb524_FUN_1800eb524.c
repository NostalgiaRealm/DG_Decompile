/*
 * FUN_1800eb524 at 1800eb524
 * undefined8 * __fastcall FUN_1800eb524(longlong param_1, uint param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 1800eb524-1800eb61b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_1800eb524(longlong param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
             )

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  HANDLE pvVar4;
  undefined8 uVar5;
  
  puVar3 = (undefined8 *)FUN_1800fbccc(0x48);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = 0;
    *puVar3 = &PTR_FUN_180106f98;
    *(undefined4 *)(puVar3 + 2) = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    *(undefined4 *)(puVar3 + 5) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x2c) = 4;
    *(undefined4 *)((longlong)puVar3 + 0x34) = param_4;
    *(undefined4 *)(puVar3 + 7) = 0;
    puVar3[8] = 0;
    pvVar4 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
    puVar3[8] = pvVar4;
    if (pvVar4 != (HANDLE)0x0) {
      *(undefined4 *)(puVar3 + 6) = param_5;
      puVar3[1] = param_1;
      *(uint *)(puVar3 + 2) = param_2;
      *(undefined4 *)((longlong)puVar3 + 0x2c) = param_3;
      plVar1 = *(longlong **)((ulonglong)param_2 * 0x20 + param_1);
      uVar2 = (**(code **)(*plVar1 + 0x78))(plVar1,param_3);
      *(undefined4 *)(puVar3 + 7) = uVar2;
      uVar5 = FUN_1800eb3f4((longlong)puVar3);
      if ((char)uVar5 != '\0') {
        return puVar3;
      }
      CloseHandle((HANDLE)puVar3[8]);
      puVar3[8] = 0;
    }
    FUN_1800eb31c(puVar3);
    FUN_1800fbcf0(puVar3);
  }
  return (undefined8 *)0x0;
}

