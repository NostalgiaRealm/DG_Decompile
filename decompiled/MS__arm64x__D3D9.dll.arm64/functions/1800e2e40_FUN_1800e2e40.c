/*
 * FUN_1800e2e40 at 1800e2e40
 * undefined FUN_1800e2e40(void)
 * Address ranges: 1800e2e40-1800e32bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1800e2e40(longlong param_1,uint param_2,int param_3,undefined8 param_4,undefined4 param_5,
             byte param_6)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auVar9 [16];
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
  
  uVar1 = (ulonglong)param_2;
  lVar7 = param_1 + uVar1 * 0x28;
  lVar4 = param_1 + uVar1 * 0x18c0;
  if ((*(char *)(lVar7 + 0x2c) != '\0') &&
     (iVar2 = *(int *)(lVar7 + 0x28), *(int *)(lVar7 + 0x28) = iVar2 + 1, iVar2 == 0)) {
    if (param_3 == 5) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = *(longlong **)(lVar7 + 0x18);
    }
    *(undefined4 *)(lVar4 + 0x6d0) = 0;
    pcVar5 = *(code **)(param_1 + 0x2e0);
    local_1c0 = lVar4 + 0x6b8;
    lStack_1b8 = lVar4 + 0x6cc;
    iVar2 = (*pcVar5)(plVar8,param_3,0,0,param_4,param_5,7,lVar4 + 0x6b0,lStack_1b8,local_1c0);
    if (iVar2 < 0) {
      if (((param_6 & 1) == 0) ||
         (iVar2 = (*pcVar5)(0,5,0,0,param_4,param_5,7,lVar4 + 0x6b0,lStack_1b8,local_1c0), iVar2 < 0
         )) {
        *(int *)(lVar7 + 0x28) = *(int *)(lVar7 + 0x28) + -1;
      }
      else {
        (**(code **)**(undefined8 **)(lVar4 + 0x6b0))
                  (*(undefined8 **)(lVar4 + 0x6b0),&DAT_18023b7e8,lVar4 + 0x6c0);
        *(undefined4 *)(lVar4 + 0x6c8) = 5;
      }
    }
    else {
      (**(code **)**(undefined8 **)(lVar4 + 0x6b0))
                (*(undefined8 **)(lVar4 + 0x6b0),&DAT_18023b7e8,lVar4 + 0x6c0);
      *(int *)(lVar4 + 0x6c8) = param_3;
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x40))(plVar8,auStack_180);
        *(undefined4 *)(lVar4 + 0x6d0) = local_80;
        *(undefined4 *)(lVar4 + 0x6d4) = uStack_7c;
      }
      if ((*(longlong *)(param_1 + 0x2d8) == 0) ||
         (uVar3 = FUN_1800f6098(FUN_1800f6178), (uVar3 & 1) == 0)) {
        *(undefined8 *)(lVar7 + 0x30) = 0;
      }
    }
  }
  if (*(int *)(lVar7 + 0x28) != 0) {
    if (*(int *)(lVar7 + 0x28) != 1) {
      return 1;
    }
    (**(code **)(**(longlong **)(lVar4 + 0x6b0) + 8))();
    (**(code **)(**(longlong **)(lVar4 + 0x6b0) + 0x10))();
    local_1b0 = 0x200001050;
    uStack_1a8 = 0x1000000000004;
    local_1a0 = 0x105000000000;
    iVar2 = (**(code **)(**(longlong **)(lVar4 + 0x6b0) + 0x18))
                      (*(longlong **)(lVar4 + 0x6b0),&local_1b0,0,lVar4 + 0xea8);
    if (-1 < iVar2) {
      (**(code **)(**(longlong **)(lVar4 + 0x6b0) + 0x108))
                (*(longlong **)(lVar4 + 0x6b0),4,&local_1c0,4);
      *(bool *)(param_1 + 0x67c) = (int)local_1c0 != 0;
      if (((int)local_1c0 == 0) ||
         (uVar3 = FUN_1800e1660(param_1,uVar1,*(undefined8 *)(param_1 + 0x298)), (uVar3 & 1) != 0))
      {
        lVar7 = lVar4 + 0xd18;
        uVar3 = FUN_1800e1348(param_1,uVar1,*(undefined8 *)(param_1 + 0x298),0x2b,&DAT_18024b0d0,
                              lVar7);
        if ((uVar3 & 1) != 0) {
          uVar3 = FUN_1800e14a8(param_1,uVar1,*(undefined8 *)(param_1 + 0x298),2,&DAT_18024b198,
                                &PTR_PTR_18024b130,lVar4 + 0xe70,lVar4 + 0xe80);
          if ((uVar3 & 1) != 0) {
            local_198 = 0x200004000;
            uStack_190 = 0x1000000000001;
            local_188 = 0x1000000000;
            auVar9 = (**(code **)(**(longlong **)(lVar4 + 0x6b0) + 0x18))
                               (*(longlong **)(lVar4 + 0x6b0),&local_198,0,lVar4 + 0xe98);
            if (-1 < auVar9._0_4_) {
              iVar2 = (**(code **)(**(longlong **)(lVar4 + 0x6b0) + 0xb8))
                                (*(longlong **)(lVar4 + 0x6b0),&DAT_180232c28,lVar4 + 0xe90);
              if (-1 < iVar2) {
                *(undefined8 *)(lVar4 + 0x708) = 0;
                *(undefined8 *)(lVar4 + 0x6e0) = 0;
                *(undefined8 *)(lVar4 + 0x6e8) = 0;
                *(undefined8 *)(lVar4 + 0x6f0) = 0xffffffff;
                *(undefined8 *)(lVar4 + 0xbc8) = 0;
                *(undefined8 *)(lVar4 + 0xbc0) = 0;
                *(undefined8 *)(lVar4 + 0xbd8) = 0;
                *(undefined8 *)(lVar4 + 0xbd0) = 0;
                *(undefined8 *)(lVar4 + 0x798) = 0;
                *(undefined8 *)(lVar4 + 0x790) = 0;
                *(undefined8 *)(lVar4 + 0x7a8) = 0;
                *(undefined8 *)(lVar4 + 0x7a0) = 0;
                *(undefined8 *)(lVar4 + 0x7b8) = 0;
                *(undefined8 *)(lVar4 + 0x7b0) = 0;
                *(undefined8 *)(lVar4 + 0x7c8) = 0;
                *(undefined8 *)(lVar4 + 0x7c0) = 0;
                *(undefined8 *)(lVar4 + 0x7d8) = 0;
                *(undefined8 *)(lVar4 + 2000) = 0;
                *(undefined8 *)(lVar4 + 0x7e8) = 0;
                *(undefined8 *)(lVar4 + 0x7e0) = 0;
                *(undefined8 *)(lVar4 + 0x7f8) = 0;
                *(undefined8 *)(lVar4 + 0x7f0) = 0;
                *(undefined8 *)(lVar4 + 0x808) = 0;
                *(undefined8 *)(lVar4 + 0x800) = 0;
                *(undefined8 *)(lVar4 + 0x878) = 0;
                *(undefined8 *)(lVar4 + 0x870) = 0;
                *(undefined8 *)(lVar4 + 0x888) = 0;
                *(undefined8 *)(lVar4 + 0x880) = 0;
                *(undefined8 *)(lVar4 + 0x898) = 0;
                *(undefined8 *)(lVar4 + 0x890) = 0;
                *(undefined8 *)(lVar4 + 0x8a8) = 0;
                *(undefined8 *)(lVar4 + 0x8a0) = 0;
                *(undefined8 *)(lVar4 + 0x8b8) = 0;
                *(undefined8 *)(lVar4 + 0x8b0) = 0;
                *(undefined8 *)(lVar4 + 0x8c8) = 0;
                *(undefined8 *)(lVar4 + 0x8c0) = 0;
                *(undefined8 *)(lVar4 + 0x8d8) = 0;
                *(undefined8 *)(lVar4 + 0x8d0) = 0;
                *(undefined8 *)(lVar4 + 0x8e8) = 0;
                *(undefined8 *)(lVar4 + 0x8e0) = 0;
                *(undefined8 *)(lVar4 + 0x8f8) = 0;
                *(undefined8 *)(lVar4 + 0x8f0) = 0;
                *(undefined8 *)(lVar4 + 0x908) = 0;
                *(undefined8 *)(lVar4 + 0x900) = 0;
                *(undefined8 *)(lVar4 + 0x918) = 0;
                *(undefined8 *)(lVar4 + 0x910) = 0;
                *(undefined8 *)(lVar4 + 0x928) = 0;
                *(undefined8 *)(lVar4 + 0x920) = 0;
                *(undefined8 *)(lVar4 + 0x938) = 0;
                *(undefined8 *)(lVar4 + 0x930) = 0;
                *(undefined8 *)(lVar4 + 0x948) = 0;
                *(undefined8 *)(lVar4 + 0x940) = 0;
                *(undefined8 *)(lVar4 + 0x958) = 0;
                *(undefined8 *)(lVar4 + 0x950) = 0;
                *(undefined8 *)(lVar4 + 0x968) = 0;
                *(undefined8 *)(lVar4 + 0x960) = 0;
                *(undefined8 *)(lVar4 + 0x978) = 0;
                *(undefined8 *)(lVar4 + 0x970) = 0;
                *(undefined8 *)(lVar4 + 0x988) = 0;
                *(undefined8 *)(lVar4 + 0x980) = 0;
                *(undefined8 *)(lVar4 + 0x998) = 0;
                *(undefined8 *)(lVar4 + 0x990) = 0;
                *(undefined8 *)(lVar4 + 0x9a8) = 0;
                *(undefined8 *)(lVar4 + 0x9a0) = 0;
                *(undefined8 *)(lVar4 + 0x9b8) = 0;
                *(undefined8 *)(lVar4 + 0x9b0) = 0;
                *(undefined8 *)(lVar4 + 0x9c8) = 0;
                *(undefined8 *)(lVar4 + 0x9c0) = 0;
                *(undefined8 *)(lVar4 + 0x9d8) = 0;
                *(undefined8 *)(lVar4 + 0x9d0) = 0;
                *(undefined8 *)(lVar4 + 0x9e8) = 0;
                *(undefined8 *)(lVar4 + 0x9e0) = 0;
                *(undefined8 *)(lVar4 + 0x9f8) = 0;
                *(undefined8 *)(lVar4 + 0x9f0) = 0;
                *(undefined8 *)(lVar4 + 0xa08) = 0;
                *(undefined8 *)(lVar4 + 0xa00) = 0;
                *(undefined8 *)(lVar4 + 0xa18) = 0;
                *(undefined8 *)(lVar4 + 0xa10) = 0;
                *(undefined8 *)(lVar4 + 0xa28) = 0;
                *(undefined8 *)(lVar4 + 0xa20) = 0;
                *(undefined8 *)(lVar4 + 0xa38) = 0;
                *(undefined8 *)(lVar4 + 0xa30) = 0;
                *(undefined8 *)(lVar4 + 0xa48) = 0;
                *(undefined8 *)(lVar4 + 0xa40) = 0;
                *(undefined8 *)(lVar4 + 0xa58) = 0;
                *(undefined8 *)(lVar4 + 0xa50) = 0;
                *(undefined8 *)(lVar4 + 0xa68) = 0;
                *(undefined8 *)(lVar4 + 0xa60) = 0;
                *(undefined8 *)(lVar4 + 0xb88) = 0;
                *(undefined8 *)(lVar4 + 0xb80) = 0;
                *(undefined8 *)(lVar4 + 0xb90) = 0;
                *(undefined4 *)(lVar4 + 0xb98) = 0;
                *(undefined8 *)(lVar4 + 0xba0) = 0;
                *(undefined8 *)(lVar4 + 0xba8) = 0;
                *(undefined8 *)(lVar4 + 0xbb0) = 0;
                *(undefined8 *)(lVar4 + 3000) = 0;
                *(undefined8 *)(lVar4 + 0xbe0) = 0;
                *(undefined4 *)(lVar4 + 0xea0) = 0;
                *(longlong *)(lVar4 + 0xc08) = param_1;
                *(uint *)(lVar4 + 0xc10) = param_2;
                *(longlong *)(lVar4 + 0xc28) = param_1;
                *(uint *)(lVar4 + 0xc30) = param_2;
                *(longlong *)(lVar4 + 0xc48) = param_1;
                *(uint *)(lVar4 + 0xc50) = param_2;
                *(longlong *)(lVar4 + 0xc68) = param_1;
                *(uint *)(lVar4 + 0xc70) = param_2;
                *(longlong *)(lVar4 + 0xc88) = param_1;
                *(uint *)(lVar4 + 0xc90) = param_2;
                *(longlong *)(lVar4 + 0xca8) = param_1;
                *(uint *)(lVar4 + 0xcb0) = param_2;
                *(longlong *)(lVar4 + 0xcc8) = param_1;
                *(uint *)(lVar4 + 0xcd0) = param_2;
                *(longlong *)(lVar4 + 0xce8) = param_1;
                *(uint *)(lVar4 + 0xcf0) = param_2;
                return 1;
              }
              auVar9 = FUN_1800e18b8(param_1,uVar1,*(undefined8 *)(lVar4 + 0xe98));
              *(undefined8 *)(lVar4 + 0xe98) = 0;
            }
            FUN_1800e15f0(auVar9._0_8_,auVar9._8_8_,2,lVar4 + 0xe70,lVar4 + 0xe80);
          }
          lVar6 = 0;
          do {
            plVar8 = *(longlong **)(lVar7 + lVar6 * 8);
            if (plVar8 != (longlong *)0x0) {
              (**(code **)(*plVar8 + 0x10))();
              *(undefined8 *)(lVar7 + lVar6 * 8) = 0;
            }
            lVar6 = lVar6 + 1;
          } while (lVar6 != 0x2b);
        }
        lVar7 = 0;
        do {
          plVar8 = *(longlong **)(lVar4 + 0xcf8 + lVar7 * 8);
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x10))();
            *(undefined8 *)(lVar4 + 0xcf8 + lVar7 * 8) = 0;
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 != 4);
      }
      (**(code **)(**(longlong **)(lVar4 + 0xea8) + 0x10))();
    }
    FUN_1800e2db0(param_1,uVar1);
  }
  return 0;
}

