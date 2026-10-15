/*
 * FUN_180055c0c at 180055c0c
 * undefined __fastcall FUN_180055c0c(longlong param_1, longlong param_2, longlong param_3, char param_4)
 * Address ranges: 180055c0c-180055c70
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180055c0c(longlong param_1,longlong param_2,longlong param_3,char param_4)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 8) {
    if (iVar1 == 9) {
      *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + param_2;
      goto LAB_180055c35;
    }
    if (iVar1 != 10) {
      if (iVar1 == 0xb) {
        if (*(longlong *)(param_1 + 0x28) != 0) goto LAB_180055c35;
      }
      else if (iVar1 != 0xc) goto LAB_180055c35;
    }
  }
  *(longlong *)(param_1 + 0x28) = param_2;
LAB_180055c35:
  if (param_4 != '\0') {
    do {
      LOCK();
      bVar2 = *(int *)(param_1 + 0x54) == 0;
      if (bVar2) {
        *(int *)(param_1 + 0x54) = 1;
      }
      UNLOCK();
    } while (!bVar2);
    if (*(longlong *)(param_1 + 0x30) == param_3) {
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  return;
}

