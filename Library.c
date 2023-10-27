#include <stdio.h>
#include <stdio.h>
#include "libraryvar.c"
#include <string.h>
// #include <stdlib.h>
// function for religious text
void Rel()
{
    printf("\nThere are some results...\n\n");
    for (int i = 0; i < 3; i++)
    {
        printf("1)The Bible\n2)The Quran\n3)The Bhagavat Gita\n\n");
        printf("Enter your choice:\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\t\t\t\t--------------------THE BIBLE----------------------\nThe Bible is a sacred religious text that holds significant importance in Christianity. It is considered the holy scripture and the word of God by Christians. The Bible consists of two main sections: the Old Testament and the New Testament. Here's an overview of the Bible:\n\n1. Old Testament: The Old Testament is the first section of the Bible, and it contains religious texts that were written before the birth of Jesus Christ. It consists of various books, including historical accounts, laws, poetry, prophecies, and wisdom literature. Some of the well-known books in the Old Testament include Genesis, Exodus, Psalms, Proverbs, Isaiah, and many others.\n\n2. New Testament: The New Testament is the second section of the Bible and focuses on the life, teachings, death, and resurrection of Jesus Christ. It includes four Gospels (Matthew, Mark, Luke, and John), which narrate the life and teachings of Jesus, as well as the Acts of the Apostles, which describes the early Christian church's history. The New Testament also contains letters written by early Christian leaders, such as Paul, Peter, and John, addressing various theological and moral issues within the early Christian communities.\n\n3. Themes: The Bible covers a wide range of themes, including creation, the nature of God, the history of the Israelites, the life and teachings of Jesus, salvation, forgiveness, love, and the promise of eternal life.\n\n4. Influence: The Bible has had a profound influence on Western civilization, literature, art, and culture. It has inspired countless works of literature, music, and art throughout history.\n\n5. Versions and Translations: The Bible has been translated into numerous languages, making it accessible to people all around the world. Different Christian denominations may use slightly different versions of the Bible, with variations in translation and the inclusion of certain books.\n\n6. Importance in Christianity: For Christians, the Bible is the ultimate authority and source of divine guidance. It serves as a guide for moral living, faith, and spiritual growth.\n\n7. Divisions: The Bible is divided into chapters and verses to facilitate study and reference.\n\nIt's important to note that different Christian denominations may have variations in the number of books included in their versions of the Old Testament due to differences in historical canons.\n\nOverall, the Bible remains a central and revered text in Christianity, cherished for its spiritual wisdom, historical significance, and profound impact on believers' lives throughout history.\n\n");
            break;
        case 2:
            printf("\t\t\t\t--------------------THE QURAN-----------------------\nThe book you are referring to is likely the Quran, also spelled as Qur'an or Koran. The Quran is the holy scripture of Islam and is considered by Muslims to be the word of God as revealed to the Prophet Muhammad (peace be upon him) through the angel Gabriel over a period of approximately 23 years, starting in 610 CE.It is written in Arabic and is divided into chapters called "
                   "Surahs,"
                   " which are further divided into verses called "
                   "Ayahs.\n\nHere are some key points about the Quran:\n\n1. Divine Revelation: Muslims believe that the Quran is the literal word of God (Allah) and is unaltered since its revelation to Prophet Muhammad. It is the ultimate source of guidance for Muslims in matters of faith, morality, law, and spirituality.\n\n2. Themes: The Quran covers various themes, including theology, morality, guidance for personal conduct, social justice, and stories of past prophets and communities as examples for human behavior.\n\n3. Language: The Quran is written in eloquent and poetic Arabic, considered a literary masterpiece, and is highly revered for its linguistic beauty and depth of meaning.\n\n4. Recitation and Memorization: Muslims are encouraged to recite and memorize the Quran as an act of worship and to better understand its teachings.\n\n5. Division: The Quran is divided into 114 Surahs of varying lengths. Each Surah is further divided into Ayahs, and the total number of Ayahs is over 6,000.\n\n6. Central Pillar of Islam: The Quran is one of the Five Pillars of Islam, along with the declaration of faith, prayer, fasting during Ramadan, and pilgrimage to Mecca (Hajj).\n\n7. Translation: While the Quran is in Arabic, translations are available in many languages to facilitate understanding for non-Arabic speakers. However, it is important to note that the Quran's original linguistic beauty and depth may not be fully captured in translations.\n\nThe Quran holds a central place in the lives of Muslims and is studied, recited, and reflected upon by millions of people worldwide. It serves as a guide for Muslims to lead a life in accordance with the will of God and to seek spiritual fulfillment and enlightenment.\n\n");
            break;
        case 3:
            printf("\t\t\t--------------------THE BHAGAVAD GITA------------------------\nThe Bhagavad Gita, often referred to as the Gita, is a sacred Hindu scripture that forms a part of the Indian epic, the Mahabharata. It is a philosophical and spiritual dialogue between Prince Arjuna and Lord Krishna, who serves as his charioteer and divine guide. The Gita is considered one of the most important and revered texts in Hindu philosophy and is also respected by people of various spiritual traditions worldwide. Here's an overview of the Bhagavad Gita:\n\n1. Context: The Bhagavad Gita is set in the epic battlefield of Kurukshetra, where two groups of cousins, the Pandavas and the Kauravas, are about to engage in a great war. Arjuna, one of the Pandava princes, is filled with doubt and moral dilemma about participating in the battle.\n\n2. The Dialogue: Arjuna turns to Lord Krishna for guidance, seeking answers to his inner conflicts and confusion. Lord Krishna imparts spiritual wisdom and philosophical teachings to Arjuna, addressing his doubts and concerns about duty, righteousness, and the nature of life and death.\n\n3. Themes: The Bhagavad Gita covers various philosophical and spiritual themes, including Dharma (duty/righteousness), Karma Yoga (the path of selfless action), Jnana Yoga (the path of knowledge), Bhakti Yoga (the path of devotion), and the nature of the self (Atman) and the Supreme Reality (Brahman).\n\n4. Concepts: The Gita introduces important concepts such as the eternal soul (Atman), the imperishable and unchanging aspect of the self; the transient physical body (the perishable aspect); and the notion of detachment from the fruits of actions while fulfilling one's duty.\n\n5. Liberation and Self-Realization: The ultimate goal of the teachings in the Bhagavad Gita is to lead one to self-realization and liberation (Moksha), breaking free from the cycle of birth and death (Samsara).\n\n6. Universality: The Gita's teachings are not limited to any specific religion or sect but offer universal principles of spirituality and moral living that can be applied by people of all walks of life.\n\n7. Impact: The Bhagavad Gita has profoundly influenced Indian philosophy, spirituality, and culture for centuries. It has been the subject of numerous commentaries, interpretations, and discussions by scholars and spiritual leaders.\n\n8. Verses: The Bhagavad Gita contains 700 verses distributed across 18 chapters, with each chapter presenting a specific aspect of the teachings.\n\nThe Bhagavad Gita remains a timeless and treasured source of wisdom, inspiring individuals to lead a life of righteousness, selflessness, and spiritual growth. It continues to be studied and revered as a guiding light for those seeking inner peace, understanding, and enlightenment.\n\n");
        default:
            break;
        }
    }
}
// function for stories
void st()
{
    printf("1)Love Stories\n2)Horror Stories\n3)Thriller Stories\n\n");
    printf("Enter Your Choice:");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("work in progress\n");
        break;
    case 2:
        printf("Work in Progress\n");
        break;
    case 3:
        printf("Work in Progress\n");
        break;
    default:
        break;
    }
}
// function for poem
void po()
{
    printf("\n1)Rober Frost\n2)William Shakespeare\n4)Mahadevi Verma\n\n");
    printf("Select The Author:");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Work in Progress\n");
        break;
    case 2:
        printf("Work in Progress\n");
        break;
    case 3:
        printf("Work in Progress\n");
        break;
    default:
        break;
    }
}
// function for adding your content
void add()
{
    // int *ptr;
    // ptr = (int *)malloc(100 * sizeof(int));
    printf("Write Here:\n");
    scanf("%s", &content);
    printf("\nPrinting the content:\n\n");
    printf("%s\n\n", content);
    // free(ptr);
}
int main()
{
    printf("Today's Date is %s\n", __DATE__);
    printf("Current time is %s\n\n", __TIME__);
    printf("Enter Your Name:");
    scanf("%s", &name);
    printf("Enter the Password:");
    scanf("%d",&pass);
    if (pass == 123)
    {
        printf("Welcome master %s!\n",name);
        printf("Its Good to see you!");

    }
    else
    {
        goto end;
    }
    printf("\n\n-------------------------Welcome %s to our Library------------------------------\n\n", name);
    printf("What do You want to read!\n\n");
    // selecting the choices
    for (int i = 0; i <= 5; i++)
    {
        printf("1) Religious Texts Summary\n2) Poems\n3) Stories\n4) Add Your Story\n5) Quit\n");
        printf("\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            Rel();
            break;
        case 2:
            po();
            break;
        case 3:
            st();
            break;
        case 4:
            add();
            break;
        case 5:
            printf("Quiting the library...");
            goto end;
        default:
            printf("Invalid choice\n");
            break;
        }
    }
end:
    return 0;
}