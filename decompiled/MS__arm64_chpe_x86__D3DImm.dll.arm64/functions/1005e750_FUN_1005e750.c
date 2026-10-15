/*
 * FUN_1005e750 at 1005e750
 * undefined FUN_1005e750(void)
 * Address ranges: 1005e750-1005e863
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005e750(int param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  if (*(char *)(param_1 + 0x1671) != '\0') {
    puVar1 = (undefined8 *)(param_2 + 0x7c);
    *(uint *)(param_2 + 0x78) = *(uint *)(param_1 + 0x1640) | *(int *)(param_1 + 0x1644) << 0xc;
    uVar4 = *(undefined8 *)(param_1 + 0x1650);
    uVar3 = *(undefined8 *)(param_1 + 0x1648);
    *(ulonglong *)(param_2 + 0x84) =
         CONCAT44((int)((float)((ulonglong)uVar4 >> 0x20) + 1.0),
                  (int)((float)((ulonglong)uVar3 >> 0x20) + 1.0));
    *puVar1 = CONCAT44((int)((float)uVar4 + -1.0),(int)((float)uVar3 + -1.0));
    iVar2 = *(int *)(param_1 + 0x151c);
    *(undefined1 *)(iVar2 + 0xd2) = 0;
    local_30 = *(int *)(iVar2 + 0xa8);
    local_2c = *(int *)(iVar2 + 0xac);
    local_28 = *(int *)(iVar2 + 0xb0) + *(int *)(iVar2 + 0xa8);
    local_24 = *(int *)(iVar2 + 0xb4) + *(int *)(iVar2 + 0xac);
    (*(code *)PTR_FUN_100a1088)(puVar1,puVar1,&local_30);
  }
  *(int *)(param_1 + 0x151c) = *(int *)(param_1 + 0x166c);
  *(undefined1 *)(param_1 + 0x1754) = 1;
  return;
}

