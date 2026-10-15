/*
 * FUN_180032f74 at 180032f74
 * bool __fastcall FUN_180032f74(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 180032f74-18003301e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180032f74(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  
  FUN_180032ec0(param_1);
  lVar1 = *(longlong *)(param_1 + 0xb8);
  bVar3 = FUN_1800322f0(param_1 + 0x68,*(HANDLE *)(param_1 + 0xf8),
                        *(int *)(param_1 + 0x18) * 0x40 + 0xfffU & 0xfffff000,param_4,
                        *(char *)(param_1 + 0xef));
  *(undefined1 *)(param_1 + 0xef) = 0;
  bVar5 = 1;
  if ((*(longlong *)(param_1 + 0xf8) == 0) && ((*(byte *)(param_1 + 0x48) & 0x20) != 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (((lVar1 == 0) && (bVar3)) && (bVar2)) {
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x28))
                      (*(longlong **)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x94),
                       *(undefined4 *)(param_1 + 0x98));
    if (cVar4 == '\0') goto LAB_18003300c;
  }
  bVar5 = 0;
LAB_18003300c:
  *(byte *)(param_1 + 0xee) = *(byte *)(param_1 + 0xee) | bVar5;
  return bVar3;
}

