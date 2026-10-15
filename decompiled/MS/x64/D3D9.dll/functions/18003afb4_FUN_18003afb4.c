/*
 * FUN_18003afb4 at 18003afb4
 * ulonglong __fastcall FUN_18003afb4(longlong param_1, undefined8 param_2, longlong param_3)
 * Address ranges: 18003afb4-18003b0fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18003afb4(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined2 local_rese;
  
  uVar8 = *(char *)(param_3 + 0x443) != '\0';
  uVar1 = *(undefined1 *)(param_1 + 0xae);
  uVar2 = *(undefined4 *)(param_1 + 0xa4);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0xf6d0);
  if (*(char *)(param_3 + 0x4a6c) == '\x03') {
    uVar5 = FUN_180079f08(param_3);
    uVar8 = (undefined1)uVar5;
  }
  puVar6 = (undefined8 *)FUN_1800fbccc(0x108);
  puVar7 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[1] = 0;
    *(undefined4 *)(puVar6 + 2) = 0;
    puVar6[3] = 0;
    puVar6[4] = &PTR_FUN_1801029a0;
    *(undefined2 *)((longlong)puVar6 + 0x4e) = local_rese;
    *(undefined4 *)(puVar6 + 9) = uVar2;
    *(undefined1 *)((longlong)puVar6 + 0x4c) = uVar8;
    *(undefined1 *)((longlong)puVar6 + 0x4d) = uVar1;
    puVar6[8] = param_2;
    puVar6[0xb] = 0;
    puVar6[10] = 0;
    *puVar6 = &PTR_FUN_180101e48;
    puVar6[6] = &PTR_LAB_180101e30;
    puVar6[0x15] = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x1a] = 0;
    *(undefined4 *)(puVar6 + 0x1b) = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar6 + 0x1c));
    puVar6[7] = param_3;
    puVar6[1] = uVar4;
    *(undefined4 *)(puVar6 + 2) = uVar3;
    if (*(char *)(param_3 + 0x4a6c) == '\x03') {
      FUN_180079f54((longlong)(puVar6 + 6));
    }
    puVar6[0x1a] = puVar6[1];
    *(undefined4 *)(puVar6 + 0x1b) = *(undefined4 *)(puVar6 + 2);
    puVar7 = puVar6;
  }
  return -(ulonglong)(puVar7 != (undefined8 *)0x0) & (ulonglong)(puVar7 + 6);
}

