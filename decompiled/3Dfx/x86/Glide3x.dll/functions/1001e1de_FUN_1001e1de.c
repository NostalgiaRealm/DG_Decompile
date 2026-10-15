/*
 * FUN_1001e1de at 1001e1de
 * undefined4 __fastcall FUN_1001e1de(int param_1)
 * Address ranges: 1001e1de-1001e444
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1001e1de(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int *local_50 [6];
  int *local_38 [3];
  int *local_2c [3];
  int *local_20 [3];
  int *local_14;
  undefined1 local_10 [4];
  undefined1 local_c [8];
  
  local_58 = 0;
  local_54 = 0;
  FUN_10044502(*(void **)(*(int *)(param_1 + 0x138) + 0x3300),
               *(int *)(*(int *)(param_1 + 0x138) + 0x3304),2,(int)&local_58,0);
  iVar1 = *(int *)(param_1 + 0x138);
  iVar6 = *(int *)(*(int *)(iVar1 + 4) + 0x3f);
  if (iVar6 == 0) {
    iVar6 = 1;
  }
  *(int *)(param_1 + 0x28) = iVar6;
  local_64 = 0;
  local_68 = (int *)0x0;
  uVar5 = *(undefined4 *)(iVar1 + 0xa4);
  uVar2 = *(undefined4 *)(iVar1 + 0xa0);
  local_60 = uVar2;
  local_5c = uVar5;
  uVar3 = FUN_10020ee5((void *)(param_1 + 0x344),uVar2,uVar5,iVar6,
                       *(byte *)(*(int *)(iVar1 + 4) + 0x54),&local_64,&local_68);
  if ((char)uVar3 != '\0') {
    uVar4 = FUN_10020c8a((void *)(param_1 + 0x13c),uVar2,uVar5,*(int *)(param_1 + 0x28),local_50,
                         local_50 + 3,local_50 + 6,local_50 + 9,local_50 + 0xc,local_50 + 0xf);
    if ((char)uVar4 != '\0') {
      uVar4 = FUN_10020c8a((void *)(param_1 + 0x240),uVar2,uVar5,*(int *)(param_1 + 0x28),
                           local_50 + 1,local_50 + 4,local_50 + 7,local_50 + 10,local_50 + 0xd,
                           local_10);
      if ((char)uVar4 != '\0') {
        uVar5 = FUN_10020c8a((void *)(param_1 + 0x344),uVar2,uVar5,*(int *)(param_1 + 0x28),
                             local_50 + 2,local_50 + 5,local_50 + 8,local_50 + 0xb,local_50 + 0xe,
                             local_c);
        if ((char)uVar5 != '\0') {
          FUN_10020fb8(param_1 + 0x344);
          uVar3 = 0;
          *(undefined4 *)(param_1 + 0x438) = local_64;
          *(int **)(param_1 + 0x43c) = local_68;
          do {
            iVar6 = uVar3 * 0x104;
            FUN_10020e62((int *)(param_1 + 0x13c + iVar6));
            *(int **)(param_1 + 0x1e8 + iVar6) = local_50[uVar3];
            *(int **)(param_1 + 0x1ec + iVar6) = local_50[uVar3 + 3];
            *(int **)(param_1 + 0x1f0 + iVar6) = local_50[uVar3 + 6];
            *(int **)(param_1 + 500 + iVar6) = local_50[uVar3 + 9];
            *(int **)(param_1 + 0x1f8 + iVar6) = local_50[uVar3 + 0xc];
            iVar1 = uVar3 * 4;
            uVar3 = uVar3 + 1;
            *(undefined4 *)(param_1 + 0x1fc + iVar6) = *(undefined4 *)(local_10 + iVar1 + -4);
            *(undefined4 *)(param_1 + 0x164 + iVar6) = local_60;
            *(undefined4 *)(param_1 + 0x168 + iVar6) = local_5c;
            *(undefined4 *)(param_1 + 0x16c + iVar6) = *(undefined4 *)(param_1 + 0x28);
          } while (uVar3 < 3);
          return CONCAT31((int3)((uint)local_5c >> 8),1);
        }
        (**(code **)(*local_50[1] + 8))(local_50[1]);
        (**(code **)(*local_50[3] + 8))(local_50[3]);
        (**(code **)(*local_50[5] + 8))(local_50[5]);
        (**(code **)(*local_38[1] + 8))(local_38[1]);
        (**(code **)(*local_2c[0] + 8))(local_2c[0]);
        (**(code **)(*local_2c[2] + 8))(local_2c[2]);
      }
      (**(code **)(*local_50[0] + 8))(local_50[0]);
      (**(code **)(*local_50[2] + 8))(local_50[2]);
      (**(code **)(*local_50[4] + 8))(local_50[4]);
      (**(code **)(*local_38[0] + 8))(local_38[0]);
      (**(code **)(*local_38[2] + 8))(local_38[2]);
      (**(code **)(*local_2c[1] + 8))(local_2c[1]);
    }
    (**(code **)(*local_68 + 8))(local_68);
    uVar3 = (**(code **)(*local_68 + 8))(local_68);
  }
  return uVar3 & 0xffffff00;
}

