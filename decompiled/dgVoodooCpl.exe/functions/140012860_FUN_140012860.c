/*
 * FUN_140012860 at 140012860
 * char __fastcall FUN_140012860(longlong * param_1)
 * Address ranges: 140012860-14001294f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_140012860(longlong *param_1)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  FUN_140011730((longlong)param_1);
  cVar2 = '\0';
  uVar5 = 0;
  if ((int)param_1[0x65] != 0) {
    do {
      uVar1 = FUN_140013910(param_1[0x90],*(uint *)(param_1[100] + uVar5 * 4),(int)param_1[0x91]);
      if ((char)uVar1 == '\0') {
        uVar4 = *(uint *)(param_1 + 0x65);
        uVar3 = (uint)uVar5;
        if (uVar3 < uVar4) {
          uVar6 = uVar3 + 1;
          if (uVar6 < uVar4) {
            do {
              uVar5 = (ulonglong)uVar6;
              uVar4 = uVar6 - 1;
              uVar6 = uVar6 + 1;
              *(undefined4 *)(param_1[100] + (ulonglong)uVar4 * 4) =
                   *(undefined4 *)(param_1[100] + uVar5 * 4);
              uVar4 = *(uint *)(param_1 + 0x65);
            } while (uVar6 < uVar4);
          }
          *(uint *)(param_1 + 0x65) = uVar4 - 1;
        }
        uVar5 = (ulonglong)(uVar3 - 1);
      }
      else if (*(char *)(param_1[0x90] + 0x34d +
                        (ulonglong)*(uint *)(param_1[100] + uVar5 * 4) * 0x20) == '\0') {
        cVar2 = '\x01';
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 0x65));
    if (cVar2 != '\0') {
      return cVar2;
    }
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  return '\0';
}

