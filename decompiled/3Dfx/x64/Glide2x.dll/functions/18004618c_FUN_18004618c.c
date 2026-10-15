/*
 * FUN_18004618c at 18004618c
 * undefined8 * __fastcall FUN_18004618c(longlong param_1, uint param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 18004618c-180046283
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_18004618c(longlong param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
             )

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  HANDLE pvVar4;
  undefined8 uVar5;
  
  puVar3 = (undefined8 *)FUN_18005d6fc(0x48);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = 0;
    *puVar3 = &PTR_FUN_180064260;
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
      uVar5 = FUN_18004605c((longlong)puVar3);
      if ((char)uVar5 != '\0') {
        return puVar3;
      }
      CloseHandle((HANDLE)puVar3[8]);
      puVar3[8] = 0;
    }
    FUN_180045f84(puVar3);
    FUN_18005d720(puVar3);
  }
  return (undefined8 *)0x0;
}

