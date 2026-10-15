/*
 * FUN_180020bb0 at 180020bb0
 * undefined __fastcall FUN_180020bb0(longlong param_1)
 * Address ranges: 180020bb0-180020c0c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180020bb0(longlong param_1)

{
  char cVar1;
  byte bVar2;
  ulonglong uVar3;
  
  cVar1 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 8) + 0x10) + 8))();
  if (cVar1 != '\0') {
    uVar3 = FUN_180050234(*(longlong *)(*(longlong *)(param_1 + 8) + 0x2978),
                          *(longlong *)(param_1 + 0x10));
    bVar2 = (byte)uVar3;
    if (*(byte *)(param_1 + 0x12e) != bVar2) {
      *(byte *)(param_1 + 0x12e) = bVar2;
      *(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x20) = bVar2 ^ 1;
      (**(code **)**(undefined8 **)(*(longlong *)(param_1 + 8) + 0x10))();
    }
  }
  return;
}

