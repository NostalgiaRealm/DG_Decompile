/*
 * FUN_1800aed38 at 1800aed38
 * undefined8 __fastcall FUN_1800aed38(uint * param_1, longlong * param_2, undefined8 * param_3, int * param_4)
 * Address ranges: 1800aed38-1800aeda3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800aed38(uint *param_1,longlong *param_2,undefined8 *param_3,int *param_4)

{
  uint *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*param_1 != 0) {
    do {
      if ((*param_2 == *(longlong *)(param_1 + (ulonglong)uVar2 * 4 + 6)) &&
         (param_2[1] == *(longlong *)(param_1 + (ulonglong)uVar2 * 4 + 8))) {
        LOCK();
        puVar1 = param_1 + 1;
        uVar2 = *puVar1;
        *puVar1 = *puVar1 + 1;
        UNLOCK();
        if (param_4 != (int *)0x0) {
          *param_4 = uVar2 + 1;
        }
        *param_3 = *(undefined8 *)(param_1 + 4);
        return 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *param_1);
  }
  return 0x80004002;
}

