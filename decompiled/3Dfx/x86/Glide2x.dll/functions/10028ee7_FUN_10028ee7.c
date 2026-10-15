/*
 * FUN_10028ee7 at 10028ee7
 * undefined __fastcall FUN_10028ee7(int param_1)
 * Address ranges: 10028ee7-10028f3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10028ee7(int param_1)

{
  int iVar1;
  int local_c [2];
  
  if (*(char *)(param_1 + 0x38) != '\0') {
    iVar1 = *(int *)(param_1 + 0x3c);
    local_c[0] = 0;
    local_c[1] = 0;
    FUN_10041869(*(void **)(iVar1 + 0x3180),*(int *)(iVar1 + 0x3184),0,iVar1,local_c,local_c + 1,
                 local_c + 1);
    FUN_100418ef(*(void **)(*(int *)(param_1 + 0x3c) + 0x3180),
                 *(int *)(*(int *)(param_1 + 0x3c) + 0x3184),0,0x2a);
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  return;
}

