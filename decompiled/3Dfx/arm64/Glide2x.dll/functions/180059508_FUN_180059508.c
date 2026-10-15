/*
 * FUN_180059508 at 180059508
 * undefined8 * __cdecl FUN_180059508(longlong param_1, uint param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 180059508-180059517
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_180059508(longlong param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
             )

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  HANDLE pvVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  lVar7 = *(longlong *)(param_1 + 8);
  lVar1 = 0;
  if (lVar7 != 0) {
    lVar1 = lVar7 + 0x6d0;
  }
  puVar4 = (undefined8 *)FUN_18005fb88(0x48);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_180065270;
    puVar4[1] = 0;
    *(undefined4 *)(puVar4 + 2) = 0;
    puVar4[5] = 0x400000000;
    puVar4[3] = 0;
    puVar4[4] = 0;
    *(undefined4 *)(puVar4 + 6) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x34) = param_4;
    *(undefined4 *)(puVar4 + 7) = 0;
    puVar4[8] = 0;
    pvVar5 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
    puVar4[8] = pvVar5;
    if (pvVar5 != (HANDLE)0x0) {
      puVar4[1] = lVar1;
      *(uint *)(puVar4 + 2) = param_2;
      *(undefined4 *)((longlong)puVar4 + 0x2c) = param_3;
      *(undefined4 *)(puVar4 + 6) = param_5;
      puVar2 = (undefined8 *)((ulonglong)param_2 * 0x20);
      if (lVar7 != 0) {
        puVar2 = (undefined8 *)((longlong)((ulonglong)param_2 * 0x20) + lVar7 + 0x6d0);
      }
      uVar3 = (**(code **)(*(longlong *)*puVar2 + 0x78))((longlong *)*puVar2,param_3);
      *(undefined4 *)(puVar4 + 7) = uVar3;
      uVar6 = FUN_1800492f8((longlong)puVar4);
      if ((uVar6 & 1) != 0) {
        return puVar4;
      }
      CloseHandle((HANDLE)puVar4[8]);
      puVar4[8] = 0;
    }
    FUN_1800491f8(puVar4);
    FUN_18005fbc8(puVar4);
  }
  return (undefined8 *)0x0;
}

