/*
 * FUN_180051888 at 180051888
 * undefined8 __cdecl FUN_180051888(longlong param_1, uint param_2, int param_3, ulonglong param_4, ulonglong param_5, byte param_6)
 * Address ranges: 180051888-180051d07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180051888(longlong param_1,uint param_2,int param_3,ulonglong param_4,ulonglong param_5,
             byte param_6)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  code *pcVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  longlong local_1c0;
  longlong lStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined1 auStack_180 [256];
  undefined4 local_80;
  undefined4 uStack_7c;
  
  uVar4 = (ulonglong)param_2;
  lVar8 = param_1 + uVar4 * 0x28;
  lVar6 = param_1 + uVar4 * 0x18c0;
  uVar10 = param_5 & 0xffffffff;
  if ((*(char *)(lVar8 + 0x2c) != '\0') &&
     (iVar2 = *(int *)(lVar8 + 0x28), *(int *)(lVar8 + 0x28) = iVar2 + 1, iVar2 == 0)) {
    if (param_3 == 5) {
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = *(longlong **)(lVar8 + 0x18);
    }
    *(undefined4 *)(lVar6 + 0x6d0) = 0;
    pcVar7 = *(code **)(param_1 + 0x2e0);
    local_1c0 = lVar6 + 0x6b8;
    lStack_1b8 = lVar6 + 0x6cc;
    param_5 = param_4;
    iVar2 = (*pcVar7)(plVar9,param_3,0,0,param_4,uVar10,7,lVar6 + 0x6b0,lStack_1b8,local_1c0);
    if (iVar2 < 0) {
      if (((param_6 & 1) == 0) ||
         (iVar2 = (*pcVar7)(0,5,0,0,param_4,uVar10,7,lVar6 + 0x6b0,lStack_1b8,local_1c0),
         param_5 = param_4, iVar2 < 0)) {
        *(int *)(lVar8 + 0x28) = *(int *)(lVar8 + 0x28) + -1;
      }
      else {
        (**(code **)**(undefined8 **)(lVar6 + 0x6b0))
                  (*(undefined8 **)(lVar6 + 0x6b0),&DAT_180069850,lVar6 + 0x6c0);
        *(undefined4 *)(lVar6 + 0x6c8) = 5;
        param_5 = param_4;
      }
    }
    else {
      (**(code **)**(undefined8 **)(lVar6 + 0x6b0))
                (*(undefined8 **)(lVar6 + 0x6b0),&DAT_180069850,lVar6 + 0x6c0);
      *(int *)(lVar6 + 0x6c8) = param_3;
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x40))(plVar9,auStack_180);
        *(undefined4 *)(lVar6 + 0x6d0) = local_80;
        *(undefined4 *)(lVar6 + 0x6d4) = uStack_7c;
      }
      if ((*(longlong *)(param_1 + 0x2d8) == 0) ||
         (uVar10 = FUN_18005ff78(FUN_180060058), (uVar10 & 1) == 0)) {
        *(undefined8 *)(lVar8 + 0x30) = 0;
      }
    }
  }
  if (*(int *)(lVar8 + 0x28) != 0) {
    if (*(int *)(lVar8 + 0x28) != 1) {
      return 1;
    }
    (**(code **)(**(longlong **)(lVar6 + 0x6b0) + 8))();
    (**(code **)(**(longlong **)(lVar6 + 0x6b0) + 0x10))();
    local_1b0 = 0x200001050;
    uStack_1a8 = 0x1000000000004;
    local_1a0 = 0x105000000000;
    iVar2 = (**(code **)(**(longlong **)(lVar6 + 0x6b0) + 0x18))
                      (*(longlong **)(lVar6 + 0x6b0),&local_1b0,0,lVar6 + 0xea8);
    if (-1 < iVar2) {
      uVar5 = 4;
      (**(code **)(**(longlong **)(lVar6 + 0x6b0) + 0x108))
                (*(longlong **)(lVar6 + 0x6b0),4,&local_1c0);
      *(bool *)(param_1 + 0x67c) = (int)local_1c0 != 0;
      if (((int)local_1c0 == 0) ||
         (uVar3 = FUN_180053398(param_1,uVar4,*(HMODULE *)(param_1 + 0x298),uVar5,param_5,
                                (undefined8 *)(lVar6 + 0xcf8)), (uVar3 & 1) != 0)) {
        puVar1 = (undefined1 *)(lVar6 + 0xd18);
        uVar3 = FUN_1800530c0(param_1,uVar4,*(HMODULE *)(param_1 + 0x298),0x2b,0x18006f4f0,puVar1);
        if ((uVar3 & 1) != 0) {
          uVar3 = FUN_1800531e0(param_1,uVar4,*(HMODULE *)(param_1 + 0x298),2,0x18006f570,
                                0x18006f550,(undefined1 *)(lVar6 + 0xe70),lVar6 + 0xe80);
          if ((uVar3 & 1) != 0) {
            local_198 = 0x200004000;
            uStack_190 = 0x1000000000001;
            local_188 = 0x1000000000;
            auVar11 = (**(code **)(**(longlong **)(lVar6 + 0x6b0) + 0x18))
                                (*(longlong **)(lVar6 + 0x6b0),&local_198,0,lVar6 + 0xe98);
            if (-1 < auVar11._0_4_) {
              iVar2 = (**(code **)(**(longlong **)(lVar6 + 0x6b0) + 0xb8))
                                (*(longlong **)(lVar6 + 0x6b0),&DAT_180065d70,lVar6 + 0xe90);
              if (-1 < iVar2) {
                *(undefined8 *)(lVar6 + 0x708) = 0;
                *(undefined8 *)(lVar6 + 0x6e0) = 0;
                *(undefined8 *)(lVar6 + 0x6e8) = 0;
                *(undefined8 *)(lVar6 + 0x6f0) = 0xffffffff;
                *(undefined8 *)(lVar6 + 0xbc8) = 0;
                *(undefined8 *)(lVar6 + 0xbc0) = 0;
                *(undefined8 *)(lVar6 + 0xbd8) = 0;
                *(undefined8 *)(lVar6 + 0xbd0) = 0;
                *(undefined8 *)(lVar6 + 0x798) = 0;
                *(undefined8 *)(lVar6 + 0x790) = 0;
                *(undefined8 *)(lVar6 + 0x7a8) = 0;
                *(undefined8 *)(lVar6 + 0x7a0) = 0;
                *(undefined8 *)(lVar6 + 0x7b8) = 0;
                *(undefined8 *)(lVar6 + 0x7b0) = 0;
                *(undefined8 *)(lVar6 + 0x7c8) = 0;
                *(undefined8 *)(lVar6 + 0x7c0) = 0;
                *(undefined8 *)(lVar6 + 0x7d8) = 0;
                *(undefined8 *)(lVar6 + 2000) = 0;
                *(undefined8 *)(lVar6 + 0x7e8) = 0;
                *(undefined8 *)(lVar6 + 0x7e0) = 0;
                *(undefined8 *)(lVar6 + 0x7f8) = 0;
                *(undefined8 *)(lVar6 + 0x7f0) = 0;
                *(undefined8 *)(lVar6 + 0x808) = 0;
                *(undefined8 *)(lVar6 + 0x800) = 0;
                *(undefined8 *)(lVar6 + 0x878) = 0;
                *(undefined8 *)(lVar6 + 0x870) = 0;
                *(undefined8 *)(lVar6 + 0x888) = 0;
                *(undefined8 *)(lVar6 + 0x880) = 0;
                *(undefined8 *)(lVar6 + 0x898) = 0;
                *(undefined8 *)(lVar6 + 0x890) = 0;
                *(undefined8 *)(lVar6 + 0x8a8) = 0;
                *(undefined8 *)(lVar6 + 0x8a0) = 0;
                *(undefined8 *)(lVar6 + 0x8b8) = 0;
                *(undefined8 *)(lVar6 + 0x8b0) = 0;
                *(undefined8 *)(lVar6 + 0x8c8) = 0;
                *(undefined8 *)(lVar6 + 0x8c0) = 0;
                *(undefined8 *)(lVar6 + 0x8d8) = 0;
                *(undefined8 *)(lVar6 + 0x8d0) = 0;
                *(undefined8 *)(lVar6 + 0x8e8) = 0;
                *(undefined8 *)(lVar6 + 0x8e0) = 0;
                *(undefined8 *)(lVar6 + 0x8f8) = 0;
                *(undefined8 *)(lVar6 + 0x8f0) = 0;
                *(undefined8 *)(lVar6 + 0x908) = 0;
                *(undefined8 *)(lVar6 + 0x900) = 0;
                *(undefined8 *)(lVar6 + 0x918) = 0;
                *(undefined8 *)(lVar6 + 0x910) = 0;
                *(undefined8 *)(lVar6 + 0x928) = 0;
                *(undefined8 *)(lVar6 + 0x920) = 0;
                *(undefined8 *)(lVar6 + 0x938) = 0;
                *(undefined8 *)(lVar6 + 0x930) = 0;
                *(undefined8 *)(lVar6 + 0x948) = 0;
                *(undefined8 *)(lVar6 + 0x940) = 0;
                *(undefined8 *)(lVar6 + 0x958) = 0;
                *(undefined8 *)(lVar6 + 0x950) = 0;
                *(undefined8 *)(lVar6 + 0x968) = 0;
                *(undefined8 *)(lVar6 + 0x960) = 0;
                *(undefined8 *)(lVar6 + 0x978) = 0;
                *(undefined8 *)(lVar6 + 0x970) = 0;
                *(undefined8 *)(lVar6 + 0x988) = 0;
                *(undefined8 *)(lVar6 + 0x980) = 0;
                *(undefined8 *)(lVar6 + 0x998) = 0;
                *(undefined8 *)(lVar6 + 0x990) = 0;
                *(undefined8 *)(lVar6 + 0x9a8) = 0;
                *(undefined8 *)(lVar6 + 0x9a0) = 0;
                *(undefined8 *)(lVar6 + 0x9b8) = 0;
                *(undefined8 *)(lVar6 + 0x9b0) = 0;
                *(undefined8 *)(lVar6 + 0x9c8) = 0;
                *(undefined8 *)(lVar6 + 0x9c0) = 0;
                *(undefined8 *)(lVar6 + 0x9d8) = 0;
                *(undefined8 *)(lVar6 + 0x9d0) = 0;
                *(undefined8 *)(lVar6 + 0x9e8) = 0;
                *(undefined8 *)(lVar6 + 0x9e0) = 0;
                *(undefined8 *)(lVar6 + 0x9f8) = 0;
                *(undefined8 *)(lVar6 + 0x9f0) = 0;
                *(undefined8 *)(lVar6 + 0xa08) = 0;
                *(undefined8 *)(lVar6 + 0xa00) = 0;
                *(undefined8 *)(lVar6 + 0xa18) = 0;
                *(undefined8 *)(lVar6 + 0xa10) = 0;
                *(undefined8 *)(lVar6 + 0xa28) = 0;
                *(undefined8 *)(lVar6 + 0xa20) = 0;
                *(undefined8 *)(lVar6 + 0xa38) = 0;
                *(undefined8 *)(lVar6 + 0xa30) = 0;
                *(undefined8 *)(lVar6 + 0xa48) = 0;
                *(undefined8 *)(lVar6 + 0xa40) = 0;
                *(undefined8 *)(lVar6 + 0xa58) = 0;
                *(undefined8 *)(lVar6 + 0xa50) = 0;
                *(undefined8 *)(lVar6 + 0xa68) = 0;
                *(undefined8 *)(lVar6 + 0xa60) = 0;
                *(undefined8 *)(lVar6 + 0xb88) = 0;
                *(undefined8 *)(lVar6 + 0xb80) = 0;
                *(undefined8 *)(lVar6 + 0xb90) = 0;
                *(undefined4 *)(lVar6 + 0xb98) = 0;
                *(undefined8 *)(lVar6 + 0xba0) = 0;
                *(undefined8 *)(lVar6 + 0xba8) = 0;
                *(undefined8 *)(lVar6 + 0xbb0) = 0;
                *(undefined8 *)(lVar6 + 3000) = 0;
                *(undefined8 *)(lVar6 + 0xbe0) = 0;
                *(undefined4 *)(lVar6 + 0xea0) = 0;
                *(longlong *)(lVar6 + 0xc08) = param_1;
                *(uint *)(lVar6 + 0xc10) = param_2;
                *(longlong *)(lVar6 + 0xc28) = param_1;
                *(uint *)(lVar6 + 0xc30) = param_2;
                *(longlong *)(lVar6 + 0xc48) = param_1;
                *(uint *)(lVar6 + 0xc50) = param_2;
                *(longlong *)(lVar6 + 0xc68) = param_1;
                *(uint *)(lVar6 + 0xc70) = param_2;
                *(longlong *)(lVar6 + 0xc88) = param_1;
                *(uint *)(lVar6 + 0xc90) = param_2;
                *(longlong *)(lVar6 + 0xca8) = param_1;
                *(uint *)(lVar6 + 0xcb0) = param_2;
                *(longlong *)(lVar6 + 0xcc8) = param_1;
                *(uint *)(lVar6 + 0xcd0) = param_2;
                *(longlong *)(lVar6 + 0xce8) = param_1;
                *(uint *)(lVar6 + 0xcf0) = param_2;
                return 1;
              }
              auVar11 = FUN_180053678(param_1,param_2,*(longlong **)(lVar6 + 0xe98));
              *(undefined8 *)(lVar6 + 0xe98) = 0;
            }
            FUN_180053328(auVar11._0_8_,auVar11._8_8_,2,lVar6 + 0xe70,lVar6 + 0xe80);
          }
          lVar8 = 0;
          do {
            if (*(longlong **)(puVar1 + lVar8 * 8) != (longlong *)0x0) {
              (**(code **)(**(longlong **)(puVar1 + lVar8 * 8) + 0x10))();
              *(undefined8 *)(puVar1 + lVar8 * 8) = 0;
            }
            lVar8 = lVar8 + 1;
          } while (lVar8 != 0x2b);
        }
        lVar8 = 0;
        do {
          plVar9 = *(longlong **)(lVar6 + 0xcf8 + lVar8 * 8);
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x10))();
            *(undefined8 *)(lVar6 + 0xcf8 + lVar8 * 8) = 0;
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 != 4);
      }
      (**(code **)(**(longlong **)(lVar6 + 0xea8) + 0x10))();
    }
    FUN_1800517f8(param_1,param_2);
  }
  return 0;
}

