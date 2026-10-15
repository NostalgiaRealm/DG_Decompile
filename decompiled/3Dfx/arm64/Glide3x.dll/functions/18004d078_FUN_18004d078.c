/*
 * FUN_18004d078 at 18004d078
 * undefined8 * __cdecl FUN_18004d078(longlong param_1, uint param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 18004d078-18004d177
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_18004d078(longlong param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
             )

{
  undefined4 uVar1;
  undefined8 *puVar2;
  HANDLE pvVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  puVar2 = (undefined8 *)FUN_1800636c0(0x48);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_180069500;
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
      uVar5 = FUN_18004ce88((longlong)puVar2);
      if ((uVar5 & 1) != 0) {
        return puVar2;
      }
      CloseHandle((HANDLE)puVar2[8]);
      puVar2[8] = 0;
    }
    FUN_18004cd88(puVar2);
    FUN_180063700(puVar2);
  }
  return (undefined8 *)0x0;
}

