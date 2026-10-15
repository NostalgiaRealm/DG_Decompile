/*
 * FUN_100375c0 at 100375c0
 * undefined FUN_100375c0(void)
 * Address ranges: 100375c0-10037737
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100375c0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_240 [2];
  undefined1 auStack_238 [520];
  
  iVar1 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar1 == 0) {
    FUN_10001c10(0);
  }
  if (DAT_100c293c == '\0') {
    iVar1 = FUN_1008cfc8();
    if (iVar1 != 0) {
      iVar2 = FUN_1008cfc8();
      if (iVar2 != 0) {
        _DAT_100bd4d8 = *(undefined8 *)(iVar2 + 0xa4);
        DAT_100bd4d0 = *(undefined8 *)(iVar2 + 0x9c);
        DAT_100bd4e0 = *(undefined8 *)(iVar2 + 0xac);
        FUN_1008d9d0(iVar2);
      }
      if (*(char *)(iVar1 + 0x7e4) != '\0') {
        local_240[0] = 0;
        (*(code *)PTR_FUN_100ba180)(&DAT_100b1a20,0,0,local_240);
        if (local_240[0] != 0) {
          FUN_10091e40(auStack_238,local_240[0]);
          (*(code *)PTR_FUN_100ba188)(auStack_238,&DAT_100b3af8);
          DAT_100c2938 = (*(code *)PTR_FUN_100ba0f8)(auStack_238);
          (*(code *)PTR_FUN_100ba2fc)(local_240[0]);
        }
      }
      if (DAT_100c2914 == '\0') {
        DAT_100c2914 = '\x01';
      }
      FUN_1008d9d0(iVar1);
    }
    DAT_100c293c = '\x01';
  }
  if (DAT_100c2938 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (*(code *)PTR_FUN_100ba0d0)(DAT_100c2938,param_1);
  }
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return uVar3;
}

