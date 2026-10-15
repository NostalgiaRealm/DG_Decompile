/*
 * FUN_10036a50 at 10036a50
 * undefined FUN_10036a50(void)
 * Address ranges: 10036a50-10036b63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10036a50(int param_1,int param_2,int param_3)

{
  char *pcVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  
  uVar8 = 0x80070057;
  if (param_3 == 0) {
    pcVar1 = (char *)(param_1 + 0x5c);
    uVar8 = 0x88760005;
    if (*pcVar1 == '\0') {
      *(int *)(param_1 + 0x58) = 0;
      *pcVar1 = '\x01';
      uVar8 = 0;
      if (param_2 != 0) {
        iVar7 = *(int *)(param_2 + 4);
        piVar2 = (int *)(iVar7 + 0x140);
        *(int *)(param_1 + 0x58) = iVar7;
        puVar3 = (uint *)(iVar7 + 0x148);
        puVar4 = (uint *)(iVar7 + 0x144);
        uVar5 = *puVar3;
        if (*puVar4 == uVar5) {
          uVar6 = uVar5 << 1;
          if (uVar5 == 0) {
            uVar6 = 0x10;
          }
          iVar7 = uVar6 * 4;
          if (uVar6 >> 0x1e != 0) {
            iVar7 = -1;
          }
          iVar7 = FUN_100914b0(iVar7);
          if (iVar7 == 0) {
            *pcVar1 = '\0';
            return 0x80004005;
          }
          FUN_100917a0(iVar7,*piVar2,((ulonglong)*puVar3 & 0x3fffffff) << 2);
          FUN_100914d0(*piVar2);
          *piVar2 = iVar7;
          *puVar3 = uVar6;
        }
        *(int *)(*piVar2 + *puVar4 * 4) = param_1;
        *puVar4 = *puVar4 + 1;
      }
    }
  }
  return uVar8;
}

