/*
 * FUN_140010620 at 140010620
 * undefined8 __fastcall FUN_140010620(longlong param_1, uint param_2, undefined2 * param_3)
 * Address ranges: 140010620-1400106b0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140010620(longlong param_1,uint param_2,undefined2 *param_3)

{
  undefined4 uVar1;
  ulonglong in_RAX;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    in_RAX = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
    *(char *)(param_1 + 0x21) = (char)in_RAX;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if (*(char *)(param_1 + 0x22) != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x58))();
    in_RAX = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x58))();
    if (param_2 < (uint)in_RAX) {
      *param_3 = 0;
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x60))
                        (*(longlong **)(param_1 + 0x10),param_2);
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))
                        (*(longlong **)(param_1 + 0x10),uVar1,param_3);
      return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}

