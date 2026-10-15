/*
 * FUN_10012660 at 10012660
 * undefined FUN_10012660(void)
 * Address ranges: 10012660-100127df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10012660(int param_1)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_60 [8];
  
  if (*(int *)(param_1 + 0x74) == 0) {
    FUN_10034140(param_1,local_60);
    puVar1 = (uint *)(param_1 + 0x24);
    puVar2 = (uint *)(param_1 + 0x20);
    FUN_10010c18(param_1 + 0x68,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                 *puVar2,*puVar1,1,local_60[0],0,0);
    uVar5 = 0;
    if (*puVar1 != 0) {
      do {
        uVar4 = 0;
        if (*puVar2 != 0) {
          do {
            FUN_100340e8(param_1,*(undefined4 *)(param_1 + 0x18),uVar4);
            uVar3 = FUN_10034090(param_1,*(undefined4 *)(param_1 + 0x14),uVar4);
            (*(code *)PTR_FUN_100ba2b8)
                      (*(int *)(param_1 + 0x60) + (uVar4 + *(int *)(param_1 + 0x2c) * uVar5) * 0x1c
                       + 0xc,0,0,uVar3);
            uVar4 = uVar4 + 1;
          } while (uVar4 < *puVar2);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *puVar1);
    }
  }
  return *(int *)(param_1 + 0x74) != 0;
}

