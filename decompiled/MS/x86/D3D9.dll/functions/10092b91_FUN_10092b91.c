/*
 * FUN_10092b91 at 10092b91
 * undefined __fastcall FUN_10092b91(void * param_1)
 * Address ranges: 10092b91-10092bc9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10092b91(void *param_1)

{
  if (*(uint *)((int)param_1 + 0x6690) < *(uint *)((int)param_1 + 0x6694)) {
    FUN_10092b54(param_1,*(int *)((int)param_1 + 0x6698),*(uint *)((int)param_1 + 0x6690),
                 *(undefined4 *)((int)param_1 + 0x6694));
    *(undefined4 *)((int)param_1 + 0x6698) = 0;
    *(undefined4 *)((int)param_1 + 0x6694) = 0;
    *(undefined4 *)((int)param_1 + 0x6690) = 0;
  }
  return;
}

