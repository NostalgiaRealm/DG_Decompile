/*
 * FUN_140015e1c at 140015e1c
 * undefined __fastcall FUN_140015e1c(longlong param_1, ulonglong param_2, ulonglong param_3, uint param_4, undefined4 * param_5)
 * Address ranges: 140015e1c-140015e50
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140015e1c(longlong param_1,ulonglong param_2,ulonglong param_3,uint param_4,
                  undefined4 *param_5)

{
  FUN_140025140((byte *)((ulonglong)
                         *(uint *)(*(longlong *)
                                    (*(longlong *)
                                      (*(longlong *)(param_1 + 0x90) + 8 +
                                      (param_2 & 0xffffffff) * 0x18) + 8 +
                                    (param_3 & 0xffffffff) * 0x28) + (ulonglong)param_4 * 4) +
                        *(longlong *)(param_1 + 0x70)),param_5);
  return;
}

