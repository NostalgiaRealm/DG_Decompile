/*
 * FUN_180040010 at 180040010
 * undefined __fastcall FUN_180040010(longlong param_1)
 * Address ranges: 180040010-1800400ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180040010(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FUN_18003fab8(param_1);
    FUN_18003fa68(param_1);
    FUN_18003f8fc(param_1);
    if (*(ulonglong *)(param_1 + 0x1a0) != 0) {
      FUN_1800ea030(*(longlong *)(*(longlong *)(param_1 + 0x188) + 0x1b500),
                    *(ulonglong *)(param_1 + 0x1a0),(undefined *)0x0,'\x01');
    }
    FUN_1800e7560((longlong *)(*(longlong *)(param_1 + 0x198) + 0x19d8),
                  *(longlong *)(param_1 + 0x1a0));
    (**(code **)(**(longlong **)(param_1 + 0x1a0) + 0x10))();
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    FUN_1800de65c(*(longlong **)(param_1 + 0x188));
    *(undefined8 *)(param_1 + 0x188) = 0;
    *(undefined8 *)(param_1 + 0x198) = 0;
  }
  return;
}

