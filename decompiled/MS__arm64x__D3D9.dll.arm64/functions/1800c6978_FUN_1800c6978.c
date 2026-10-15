/*
 * FUN_1800c6978 at 1800c6978
 * undefined FUN_1800c6978(void)
 * Address ranges: 1800c6978-1800c69f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800c6978(longlong param_1,uint *param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint local_30 [2];
  undefined4 local_28;
  undefined4 uStack_24;
  
  uVar2 = 0x8876086c;
  if (param_2 != (uint *)0x0) {
    FUN_1800031b8(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0xe28),
                  *(undefined4 *)(param_1 + 0xf0),&local_28);
    local_30[0] = 0;
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0xa8))
                      (*(longlong **)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x18),local_28,
                       uStack_24,local_30);
    *param_2 = (uint)(cVar1 != '\0');
    uVar2 = 0;
    if (*(char *)(param_1 + 0x103) == '\0') {
      local_30[0] = 0;
    }
    param_2[1] = local_30[0];
  }
  return uVar2;
}

