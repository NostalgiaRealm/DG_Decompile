/*
 * FUN_18007b468 at 18007b468
 * undefined __fastcall FUN_18007b468(undefined8 param_1, longlong param_2, undefined8 param_3, longlong * param_4, char param_5)
 * Address ranges: 18007b468-18007b569
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18007b468(undefined8 param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                  char param_5)

{
  uint uVar1;
  ulonglong uVar2;
  
  FUN_18007b0b4(param_1,param_2);
  if (*(char *)(*(longlong *)(param_2 + 0x10) + 0x4884) != '\0') {
    if (param_5 == '\0') {
      uVar2 = 0;
      do {
        if (*(int *)(param_2 + 0x100 + uVar2 * 4) != 0) {
          *(uint *)(param_2 + 0x23c + uVar2 * 4) =
               *(int *)(param_2 + 0x70) << 0xe | (uint)uVar2 | 0x420300;
          FUN_1800ee208(0xe4,*(byte *)(uVar2 + 0x10 + *(longlong *)(param_2 + 0x10)));
          FUN_1800edbe0((uint *)(param_2 + 0x20),param_4,0x36,
                        (ulonglong)*(uint *)(param_2 + 0x23c + uVar2 * 4));
        }
        uVar1 = (uint)uVar2 + 1;
        uVar2 = (ulonglong)uVar1;
      } while (uVar1 < 0x10);
      *(undefined4 *)(param_2 + 0x60 + (ulonglong)*(uint *)(param_2 + 0x70) * 4) = 0x10;
      *(int *)(param_2 + 0x70) = *(int *)(param_2 + 0x70) + 1;
    }
    else {
      *(undefined1 *)(param_2 + 0x2c8) = 1;
      *(undefined8 *)(param_2 + 0x23c) = *(undefined8 *)(param_2 + 0x100);
      *(undefined8 *)(param_2 + 0x244) = *(undefined8 *)(param_2 + 0x108);
      *(undefined8 *)(param_2 + 0x24c) = *(undefined8 *)(param_2 + 0x110);
      *(undefined8 *)(param_2 + 0x254) = *(undefined8 *)(param_2 + 0x118);
      *(undefined8 *)(param_2 + 0x25c) = *(undefined8 *)(param_2 + 0x120);
      *(undefined8 *)(param_2 + 0x264) = *(undefined8 *)(param_2 + 0x128);
      *(undefined8 *)(param_2 + 0x26c) = *(undefined8 *)(param_2 + 0x130);
      *(undefined8 *)(param_2 + 0x274) = *(undefined8 *)(param_2 + 0x138);
    }
  }
  return;
}

